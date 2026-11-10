TARGET = $(notdir $(CURDIR))

BLUE =\033[0;34m
NC   =\033[0m # No Color

CONFIG = config.yaml
SRCDIR = src
INCDIR = src/include
HEADERS = $(wildcard $(INCDIR)/*.h)

DIRMEMPHIS = ../../libmemphis
INCMEMPHIS = $(DIRMEMPHIS)/src/include
HDRMEMPHIS = $(wildcard $(DIRMEMPHIS)/src/include/*.h) $(wildcard $(DIRMEMPHIS)/src/include/memphis/*.h)
LIBMEMPHIS = $(DIRMEMPHIS)/libmemphis.a

DIRMUTILS = ../../libmutils
INCMUTILS = $(DIRMUTILS)/src/include
HDRMUTILS = $(wildcard $(DIRMUTILS)/src/include/mutils/*.h)
LIBMUTILS = $(DIRMUTILS)/libmutils.a

CC = riscv64-elf-gcc
OBJDUMP = riscv64-elf-objdump
OBJCOPY = riscv64-elf-objcopy
SIZE    = riscv64-elf-size
NM      = riscv64-elf-nm
READELF = riscv64-elf-readelf
HEXDUMP = hexdump -v -e '1/4 "%08x" "\n"'

CFLAGS	+= -march=rv32imac_zicntr_zicsr_zihpm -mabi=ilp32 -Os -fdata-sections -ffunction-sections -flto -Wall -std=c23 -I$(INCDIR) -I$(INCMEMPHIS) -I$(INCMUTILS)
LDFLAGS += -L$(DIRMEMPHIS) -L$(DIRMUTILS) --specs=nano.specs -T $(DIRMEMPHIS)/memphis.ld -Wl,--gc-sections,-flto -u _getpid -march=rv32imac_zicntr_zicsr_zihpm -mabi=ilp32 -lmemphis -lmutils

SRC = $(wildcard $(SRCDIR)/*.c)
OBJ = $(patsubst %.c, %.o, $(SRC))

all: $(TARGET).txt $(TARGET).lst

$(TARGET).txt: $(TARGET).bin $(TARGET).elf
	@printf "${BLUE}Dumping task: %s ...${NC}\n" "$(TARGET)"
	@$(NM) $(TARGET).elf | awk 'BEGIN{n=split("__text_size __rodata_size __data_size __bss_size",f," ")} {v[$$3]=$$1} END{for(i=1;i<=n;i++) print v[f[i]]}' > $@
	@$(READELF) -h $(TARGET).elf | awk '/Entry point/ { printf "%08x\n", strtonum($$4) }' >> $@
	@$(HEXDUMP) $(TARGET).bin >> $@

$(TARGET).bin: $(TARGET).elf
	@printf "${BLUE}Generating binary for task: %s ...${NC}\n" "$(TARGET)"
	@$(OBJCOPY) -j .text -j .rodata -j .data -O binary $< $@

$(TARGET).elf: $(OBJ) $(LIBMEMPHIS) $(LIBMUTILS)
	@printf "${BLUE}Linking task: %s ...${NC}\n" "$(TARGET)"
	@$(CC) -Wl,-Map=$(TARGET).map -o $@ $(OBJ) $(LDFLAGS)

$(TARGET).lst: $(TARGET).elf
	@printf "${BLUE}Listing task: %s ...${NC}\n" "$(TARGET)"
	@$(OBJDUMP) -S $< > $@

$(SRCDIR)/%.o: $(SRCDIR)/%.c $(HEADERS) $(HDRMEMPHIS) $(HDRMUTILS)
	@printf "${BLUE}Compiling task: %s ...${NC}\n" "$*.c"
	@$(CC) -c $< -o $@ $(CFLAGS)

clean:
	@rm -f $(SRCDIR)/*.o
	@rm -f $(TARGET).bin
	@rm -f $(TARGET).elf
	@rm -f $(TARGET).lst
	@rm -f $(TARGET).map
	@rm -f $(TARGET).txt

.PHONY: clean
