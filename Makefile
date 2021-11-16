CC = mips-linux-gnu-gcc
EXTRA_ARGS = -mabi=eabi -O0 -mno-abicalls -mfp32 -nostdlib -static -ffreestanding -nostartfiles


example: example.c
	$(CC) $(EXTRA_ARGS) $< -o $@