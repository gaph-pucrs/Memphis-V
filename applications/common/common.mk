GREEN	= \033[0;32m
NC		= \033[0m # No Color

SRCDIR = .

SRCS = $(wildcard $(SRCDIR)/*.c)
TARGETS = $(patsubst %.c,%.txt,$(SRCS))
ELFS = $(patsubst %.c,%.elf,$(SRCS))
BINS = $(patsubst %.elf,%.bin,$(ELFS))
LSTS = $(patsubst %.bin,%.lst,$(BINS))

CC = riscv64-elf-gcc
OBJDUMP = riscv64-elf-objdump
OBJCOPY = riscv64-elf-objcopy
SIZE    = riscv64-elf-size
READELF = riscv64-elf-readelf
HEXDUMP = hexdump -v -e '1/4 "%08x" "\n"'

DIRMEMPHIS = ../../libmemphis
INCMEMPHIS = $(DIRMEMPHIS)/src/include
HDRMEMPHIS = $(wildcard $(DIRMEMPHIS)/*.h) $(wildcard $(DIRMEMPHIS)/**/*.h)
LIBMEMPHIS = $(DIRMEMPHIS)/libmemphis.a

DIRMUTILS = ../../libmutils
INCMUTILS = $(DIRMUTILS)/src/include
HDRMUTILS = $(wildcard $(DIRMUTILS)/*.h) $(wildcard $(DIRMUTILS)/**/*.h)
LIBMUTILS = $(DIRMUTILS)/libmutils.a

CFLAGS	+= -march=rv32imac -mabi=ilp32 -Os -fdata-sections -ffunction-sections -flto -Wall -std=c23 -I$(SRCDIR) -I$(INCMUTILS) -I$(INCMEMPHIS)
LDFLAGS += -L$(DIRMEMPHIS) -L$(DIRMUTILS) --specs=nano.specs -T $(DIRMEMPHIS)/memphis.ld -Wl,--gc-sections,-flto -u _getpid -march=rv32imac -mabi=ilp32 -lmemphis -lmutils

all: $(TARGETS) $(ELFS) #$(LSTS)

$(SRCDIR)/%.txt: $(SRCDIR)/i%.bin $(SRCDIR)/d%.bin $(SRCDIR)/%.elf
	@printf "${GREEN}Dumping to %s ...${NC}\n" "$(patsubst %.txt,%.bin,$@)"
	@$(SIZE) -G $(patsubst %.txt,%.elf,$@) | sed -n '2p' | awk '{printf "%08x\n", $$1}' > $@
	@$(SIZE) -G $(patsubst %.txt,%.elf,$@) | sed -n '2p' | awk '{printf "%08x\n", $$2}' >> $@
	@$(SIZE) -G $(patsubst %.txt,%.elf,$@) | sed -n '2p' | awk '{printf "%08x\n", $$3}' >> $@
	@$(READELF) -h $(patsubst %.txt,%.elf,$@) | awk '/Entry point/ { printf "%08x\n", strtonum($$4) }' >> $@
	@$(HEXDUMP) i$(patsubst %.txt,%.bin,$@) >> $@
	@$(HEXDUMP) d$(patsubst %.txt,%.bin,$@) >> $@

$(SRCDIR)/d%.bin: $(SRCDIR)/%.elf
	@printf "${GREEN}Generating binary %s ...${NC}\n" "$@"
	@$(OBJCOPY) -j .rodata -j .eh_frame -j .init_array -j .fini_array -j .data -j .sdata -O binary $< $@

$(SRCDIR)/i%.bin: $(SRCDIR)/%.elf
	@printf "${GREEN}Generating binary %s ...${NC}\n" "$@"
	@$(OBJCOPY) -j .text -O binary $< $@

# $(SRCDIR)/%.lst: $(SRCDIR)/%.elf
# 	@printf "${GREEN}Listing task: %s ...${NC}\n" "$@"
# 	@$(OBJDUMP) -S $< > $@

$(SRCDIR)/%.elf: $(SRCDIR)/%.o $(LIBMEMPHIS) $(LIBMUTILS)
	@printf "${GREEN}Linking %s ...${NC}\n" "$@"
	@$(CC) -o $@ $< $(LDFLAGS) 
#-Wl,-Map=$<.map

$(SRCDIR)/%.o: $(SRCDIR)/%.c $(HDRMEMPHIS) $(HDRMUTILS)
	@printf "${GREEN}Compiling %s ...${NC}\n" "$<"
	@$(CC) -c $< -o $@ $(CFLAGS)

clean:
	@printf "Cleaning up\n"
	@rm -rf *.o
	@rm -rf *.bin
	@rm -rf *.map
	@rm -rf *.lst
	@rm -rf *.txt
	@rm -rf *.elf

.PHONY: clean
