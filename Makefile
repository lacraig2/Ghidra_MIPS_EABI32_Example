CC_BE = mips-linux-gnu-gcc
CC_LE = mipsel-linux-gnu-gcc
EXTRA_ARGS = -mabi=eabi -O0 -mno-abicalls -mfp32 -nostdlib -static -ffreestanding -nostartfiles

default:
	$(MAKE) example_be
	$(MAKE) example_le

example_be: example.c
	$(CC_BE) $(EXTRA_ARGS) $< -o $@

example_le: example.c
	$(CC_LE) $(EXTRA_ARGS) $< -o $@