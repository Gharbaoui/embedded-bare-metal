CC=arm-none-eabi-gcc
MACHINE=cortex-m4
CFLAGS=-Wall -O0 -mcpu=$(MACHINE) -mthumb -nostdlib
TARGET=build

SRC_DIR=./src/
OBJ_DIR=./obj/
BUILD_DIR=./build/
DEBUG_DIR=./debug/

all: startup.o $(OBJ_DIR)main.o $(BUILD_DIR)$(TARGET).elf

$(BUILD_DIR)$(TARGET).elf: startup.o $(OBJ_DIR)main.o
	$(CC) -nostdlib -T linker.ld -Wl,-Map=$(DEBUG_DIR)$(TARGET).map $^ -o $@
startup.o: startup.c
	$(CC) $(CFLAGS) -c $^ -o $@
$(OBJ_DIR)main.o: $(SRC_DIR)main.c
	$(CC) $(CFLAGS) -c $^ -o $@

upload:
	openocd -f board/st_nucleo_f4.cfg

clean:
	rm -f $(BUILD_DIR)$(TARGET).elf $(OBJ_DIR)*.o $(DEBUG_DIR)*.map
