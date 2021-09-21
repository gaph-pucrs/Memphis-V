/**
 * MA-Memphis
 * @file DMNI.hpp
 * 
 * @author Unknown
 * GAPH - Hardware Design Support Group (https://corfu.pucrs.br/)
 * PUCRS - Pontifical Catholic University of Rio Grande do Sul (http://pucrs.br/)
 * 
 * @date September 2013
 * 
 * @brief Implements a DMA and NI module.
 */

#include "DMNI.hpp"

DMNI::DMNI(sc_module_name name_, regmetadeflit address_router_) :
	sc_module(name_), 
	address_router(address_router_)
{

	SC_METHOD(arbiter);
	sensitive << clock.pos();
	sensitive << reset;

	SC_METHOD(config);
	sensitive << clock.pos();

	SC_METHOD(receive);
	sensitive << clock.pos();
	sensitive << reset;

	SC_METHOD(send);
	sensitive << clock.pos();
	sensitive << reset;

	SC_METHOD(buffer_control);
	sensitive << add_buffer;
	sensitive << first;
	sensitive << last;

	SC_METHOD(credit_o_update);
	sensitive << slot_available;

	SC_METHOD(mem_address_update);
	sensitive << read_enable;
	sensitive << write_enable;
	sensitive << recv_address;
	sensitive << send_address;
}

void DMNI::arbiter(){
	if(reset.read() == 1){
		write_enable = false;
		read_enable = false;
		prio = false;
		timer = 0;

		ARB = ROUND;
		return;
	}

	switch(ARB){
		case ROUND:
		{
			if(!prio){
				if (DMNI_Receive.read() == COPY_TO_MEM) {
					ARB = RECEIVE;
					write_enable.write(1);
				} else if (send_active.read() == 1){
					ARB = SEND;
					read_enable.write(1);
				}
			} else {
				if (send_active.read() == 1){
					ARB = SEND;
					read_enable.write(1);
				} else if (DMNI_Receive.read() == COPY_TO_MEM) {
					ARB = RECEIVE;
					write_enable.write(1);
				}
			}
			break;
		}
		case SEND:
		{
			if (DMNI_Send.read() == END || (timer >= DMNI_TIMER && receive_active.read() == 1)){
				timer = 0;
				ARB = ROUND;
				read_enable.write(0);
				prio = !prio;
			} else {
				timer++;
			}
			break;
		}
		case RECEIVE:
		{
			if (DMNI_Receive.read() == END || (timer >= DMNI_TIMER && send_active.read() == 1)){
				timer = 0;
				ARB = ROUND;
				write_enable.write(0);
				prio = !prio;
			} else {
				timer++;
			}
			break;
		}
	}
}

void DMNI::config(){

	if (set_address.read() == 1){
		address.write(config_data.read());
		address_2.write(0);
	} else if (set_address_2.read() == 1){
		address_2.write(config_data.read());
	} else if (set_size.read() == 1) {
		size.write(config_data.read());
		size_2.write(0);
	} else if (set_size_2.read() == 1){
		size_2.write(config_data.read());
	} else if (set_op.read() == 1){
		operation.write(config_data.read()(0,0));
	}

}

void DMNI::mem_address_update(){
	if (read_enable.read() == 1){
		mem_address.write(send_address.read());
	} else {
		mem_address.write(recv_address.read());
	}
}

void DMNI::credit_o_update() {
	credit_o.write(slot_available.read());
}

void DMNI::buffer_control(){

	//Buffer full
	if ( ( first.read() == last.read() ) && add_buffer.read() == 1){
		slot_available.write(0);
	} else {
		slot_available.write(1);
	}

	//Buffer empty
	if ( ( first.read() == last.read() ) && add_buffer.read() == 0){
		read_av.write(0);
	} else {
		read_av.write(1);
	}
}

void DMNI::receive(){

	sc_uint<4> intr_counter_temp;

	if (reset.read() == 1){

		first.write(0);
		last.write(0);
		payload_size.write(0);
		SR.write(HEADER);
		add_buffer.write(0);
		receive_active.write(0);
		DMNI_Receive.write(WAIT);
		intr_count.write(0);
		for(int i=0; i<BUFFER_SIZE; i++){ //in vhdl replace by OTHERS=>'0'
			is_header[i] = 0;
		}
	} else {

		intr_counter_temp = intr_count.read();

		//Read from NoC
		if (rx.read() == 1 && slot_available.read() == 1){

			buffer[last.read()].write(data_in.read());
			add_buffer.write(1);
			last.write(last.read() + 1);

			switch (SR.read()) {
				case HEADER:
					intr_counter_temp = intr_counter_temp + 1;
					/*if(address_router == 0){
						cout<<"Master receiving msg "<<endl;
					}*/
					is_header[last.read()] = 1;
					SR.write(PAYLOAD);
				break;

				case PAYLOAD:
					is_header[last.read()] = 0;
					payload_size.write(data_in.read() - 1);
					SR.write(DATA);
				break;

				case DATA:
					is_header[last.read()] = 0;
					if (payload_size.read() == 0){
						SR.write(HEADER);
					} else {
						payload_size.write(payload_size.read() - 1);
					}

				break;
			}
		}

		//Write to memory
		switch (DMNI_Receive.read()) {

			case WAIT:

				if (start.read() == 1 && operation.read() == 1){
					recv_address.write(address.read() - WORD_SIZE);
					recv_size.write(size.read() - 1);
					if (is_header[first.read()] == 1 && intr_counter_temp > 0){
						intr_counter_temp = intr_counter_temp - 1;
					}
					receive_active.write(1);
					DMNI_Receive.write(COPY_TO_MEM);
				}
			break;

			case COPY_TO_MEM:

				if (write_enable.read() == 1 && read_av.read() == 1){
					mem_byte_we.write(0xF);

					mem_data_write.write(buffer[first.read()].read());
					first.write(first.read() + 1);
					add_buffer.write(0);
					recv_address.write(recv_address.read() + WORD_SIZE);
					recv_size.write(recv_size.read() - 1);

					if (recv_size.read() == 0){
						DMNI_Receive.write(END);
					}
				} else {
					mem_byte_we.write(0);
				}

			break;
			case END:
				receive_active.write(0);
				mem_byte_we.write(0);
				recv_address.write(0);
				recv_size.write(0);
				DMNI_Receive.write(WAIT);
			break;

			default:
				break;
		}

		//Interruption management
		if (intr_counter_temp > 0){
			intr.write(1);
		} else {
			intr.write(0);
		}
		intr_count.write(intr_counter_temp);
	}
}


void DMNI::send(){

	if (reset.read() == 1){
		DMNI_Send.write(WAIT);
		send_active.write(0);
		tx.write(0);
	} else {

		switch (DMNI_Send.read()) {
			case WAIT:
				if (start.read() == 1 && operation.read() == 0){
					send_address.write(address.read());
					send_address_2.write(address_2.read());
					send_size.write(size.read());
					send_size_2.write(size_2.read());
					send_active.write(1);
					DMNI_Send.write(LOAD);
					/*if(address_router == 0){
						cout<<"Master sending msg "<<endl;
					}*/
				}
			break;

			case LOAD:

				if (credit_i.read() == 1 && read_enable.read() == 1){
					send_address.write(send_address.read() + WORD_SIZE);
					DMNI_Send.write(COPY_FROM_MEM);
				}
			break;

			case COPY_FROM_MEM:

				if (credit_i.read() == 1 && read_enable.read() == 1){

					if (send_size.read() > 0){

						tx.write(1);
						data_out.write(mem_data_read.read());
						send_address.write(send_address.read() + WORD_SIZE);
						send_size.write(send_size.read() - 1);

					} else if (send_size_2.read() > 0) {

						send_size.write(send_size_2.read());
						send_size_2.write(0);
						tx.write(0);
						if (send_address_2.read()(30,28) == 0){
							send_address.write(send_address_2.read());
						} else {
							send_address.write(send_address_2.read() - WORD_SIZE);
						}
						DMNI_Send.write(LOAD);

					} else {
						tx.write(0);
						DMNI_Send.write(END);
					}
				} else {

					if (credit_i.read() == 0){
						send_size.write(send_size.read() + 1);
						send_address.write(send_address.read() - (WORD_SIZE + WORD_SIZE)); // endereco volta 2 posicoes
					} else {
						send_address.write(send_address.read() - WORD_SIZE);  // endereco volta 1 posicoes
					}
					tx.write(0);
					DMNI_Send.write(LOAD);
				}

			break;

			case END:
				send_active.write(0);
				send_address.write(0);
				send_address_2.write(0);
				send_size.write(0);
				send_size_2.write(0);
				DMNI_Send.write(WAIT);
			break;

			default:
				break;
		}
	}

}
