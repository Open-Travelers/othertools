CFLAGS = -O2 -Wall -DGEKKO -mogc -mcpu=750 -meabi -mhard-float -MMD -MP -ffunction-sections -fno-builtin -ffreestanding -fno-asynchronous-unwind-tables -I../include
LDFLAGS = 
CC=powerpc-eabi-gcc
LD=powerpc-eabi-ld
OBJCOPY=powerpc-eabi-objcopy
all: loader.packet
loader.o: loader.c
	$(CC) $(CFLAGS) -S $<
	$(CC) $(CFLAGS) -o $@ -c $<

loader.elf: loader.o
	$(LD) -T loader.ld $(LDFLAGS) $< -o $@

loader.text: loader.elf
	$(OBJCOPY) -O binary --only-section=.text $< $@

loader.data: loader.elf
	$(OBJCOPY) -O binary --only-section=.data $< $@

loader.rodata: loader.elf
	$(OBJCOPY) -O binary --only-section=.rodata $< $@

loader.bss: loader.elf
	$(OBJCOPY) -O binary --only-section=.bss $< $@

loader.got: loader.elf
	$(OBJCOPY) -O binary --only-section=.got2 $< $@

loader.header: loader.elf
	make_overlay_header.py $< $@

loader.packet: loader.header loader.text loader.data loader.rodata loader.bss loader.got
	cat loader.header loader.text loader.rodata loader.data loader.bss loader.got > loader.packet

cleanup:
	rm -f ./*.s
	rm -f ./*.text
	rm -f ./*.data
	rm -f ./*.rodata
	rm -f ./*.got
	rm -f ./*.bss
	rm -f ./*.header
	rm -f ./*.d
	rm -f ./*.o
	rm -f ./*.elf

clean: cleanup
	rm -f ./*.packet