CC=arm-elf-gcc
LD=arm-elf-ld
LPC=lpc21isp
OBJ= startup.o\
	 main.o\
	 init.o\
	 systimer.o\
	 led.o\
	 interrupt.o
SRC= main.c\
	 init.c\
	 systimer.c\
	 led.c\
	 startup.s\
	 interrupt.c
TGT= dynled
PORT= /dev/ttyUSB0
BAUD= 19200
OSC= 14746
CFLAGS= -c -I INCLUDE -Wall -Wstrict-prototypes -Wno-trigraphs -O2 -pipe -g -mcpu=arm7tdmi 
LDFLAGS= -nostartfiles -N -p -Tlpc2292.ld
LPCFLAGS= $(PORT) $(BAUD) $(OSC)
    
all: $(TGT)
 
$(TGT): $(OBJ)
		$(LD) $(LDFLAGS) $(OBJ) -o $(TGT)
		arm-elf-objdump -xS $(TGT) > $(TGT).d
		arm-elf-objcopy -O ihex $(TGT) $(TGT).hex
		arm-elf-nm $(TGT) > $(TGT).n
		rm -rf *.o
	 
#startup.o: startup.s
#		$(CC) $(CFLAGS) startup.s

$(OBJ): $(SRC)
		$(CC) $(CFLAGS) $(SRC)

load:
	$(LPC) $(TGT).hex $(LPCFLAGS)
clean:
		rm -rf *.o *.elf *.gdb $(TGT) *.r *.n *.d

 
