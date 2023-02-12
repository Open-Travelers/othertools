CFLAGS = -O2 -Wall -DGEKKO -mogc -mcpu=750 -meabi -mhard-float -MMD -MP -ffunction-sections -fno-builtin -ffreestanding -fno-asynchronous-unwind-tables -I../include
LDFLAGS = 
CC=powerpc-eabi-gcc
LD=powerpc-eabi-ld
OBJCOPY=powerpc-eabi-objcopy
all: main.dol

injection.o: injection.c
	$(CC) $(CFLAGS) -S $<
	$(CC) $(CFLAGS) -o $@ -c $<

injection.elf: injection.o
	$(LD) -T injection.ld $(LDFLAGS) $< -o $@

injection.text: injection.elf
	$(OBJCOPY) -O binary --only-section=.text $< $@

injection.data: injection.elf
	$(OBJCOPY) -O binary --only-section=.data $< $@

injection.rodata: injection.elf
	$(OBJCOPY) -O binary --only-section=.rodata $< $@

injection.bss: injection.elf
	$(OBJCOPY) -O binary --only-section=.bss $< $@

main.dol: injection.text injection.data injection.rodata injection.bss
	cat injection.text injection.rodata injection.data injection.bss > injection.packet
	doltools.py base.dol patch-data 0x800d47c8 "injection.packet" $@

cleanup:
	rm -f ./*.s
	rm -f ./*.text
	rm -f ./*.data
	rm -f ./*.rodata
	rm -f ./*.got
	rm -f ./*.packet
	rm -f ./*.bss
	rm -f ./*.d
	rm -f ./*.o
	rm -f ./*.elf

clean: cleanup
	rm -f main.dol