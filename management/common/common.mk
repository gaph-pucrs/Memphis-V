BLUE  =\033[0;34m
NC   =\033[0m # No Color

CONFIG = config.yaml
SRCDIR = src
INCDIR = src/include
INCLIB = ../../libmemphis/src/include
INCUTILS = ../../libmutils/src/include

CC = riscv64-elf-gcc
OBJDUMP = riscv64-elf-objdump
OBJCOPY = riscv64-elf-objcopy
SIZE    = riscv64-elf-size
READELF = riscv64-elf-readelf
HEXDUMP = hexdump -v -e '1/4 "%08x" "\n"'

LIBDIR = ../../libmemphis
UTILDIR = ../../libmutils

CFLAGS	+= -march=rv32im -mabi=ilp32 -Os -fdata-sections -ffunction-sections -flto -Wall -std=c17 -I$(INCDIR) -I$(LIBDIR)/src/include -I$(UTILDIR)/src/include
LDFLAGS += -L$(LIBDIR) -L$(UTILDIR) --specs=nano.specs -T $(LIBDIR)/memphis.ld -Wl,--gc-sections,-flto -u _getpid -march=rv32im -mabi=ilp32 -lmemphis -lmutils

SRC = $(wildcard $(SRCDIR)/*.c)
OBJ = $(patsubst %.c, %.o, $(SRC))

all: $(TARGET).txt $(TARGET).lst

$(TARGET).txt: i$(TARGET).bin d$(TARGET).bin $(TARGET).elf
	@printf "${BLUE}Dumping task: %s ...${NC}\n" "$(TARGET)"
	@$(SIZE) -G $(TARGET).elf | sed -n '2p' | awk '{printf "%08x\n", $$1}' > $@
	@$(SIZE) -G $(TARGET).elf | sed -n '2p' | awk '{printf "%08x\n", $$2}' >> $@
	@$(SIZE) -G $(TARGET).elf | sed -n '2p' | awk '{printf "%08x\n", $$3}' >> $@
	@$(READELF) -h $(TARGET).elf | awk '/Entry point/ { printf "%08x\n", strtonum($$4) }' >> $@
	@$(HEXDUMP) i$(TARGET).bin >> $@
	@$(HEXDUMP) d$(TARGET).bin >> $@

d$(TARGET).bin: $(TARGET).elf
	@printf "${BLUE}Generating data binary for task: %s ...${NC}\n" "$(TARGET)"
	@$(OBJCOPY) -j .rodata -j .eh_frame -j .init_array -j .fini_array -j .data -j .sdata -O binary $< $@

i$(TARGET).bin: $(TARGET).elf
	@printf "${BLUE}Generating instruction binary for task: %s ...${NC}\n" "$(TARGET)"
	@$(OBJCOPY) -j .text -O binary $< $@

$(TARGET).elf: $(OBJ)
	@printf "${BLUE}Linking task: %s ...${NC}\n" "$(TARGET)"
	@$(CC) -Wl,-Map=$(TARGET).map -o $@ $^ $(LDFLAGS)

$(TARGET).lst: $(TARGET).elf
	@printf "${BLUE}Listing task: %s ...${NC}\n" "$(TARGET)"
	@$(OBJDUMP) -S $< > $@

$(SRCDIR)/%.o: $(SRCDIR)/%.c
	@printf "${BLUE}Compiling task: %s ...${NC}\n" "$*.c"
	@$(CC) -c $< -o $@ $(CFLAGS)

clean:
	@rm -f $(SRCDIR)/*.o
	@rm -f i$(TARGET).bin
	@rm -f d$(TARGET).bin
	@rm -f $(TARGET).elf
	@rm -f $(TARGET).lst
	@rm -f $(TARGET).map
	@rm -f $(TARGET).txt

.PHONY: clean
