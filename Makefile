CC = gcc
COBJS = meb_print_example.o
EDCFLAGS = -I ./ -I ./include/ -Wall -pthread $(CFLAGS)
EDLDFLAGS :=
TARGET = meb_print_example.out

all: $(COBJS)
	$(CC) $(EDCFLAGS) $(COBJS) -o $(TARGET) $(EDLDFLAGS)
	./$(TARGET)

%.o: %.c
	$(CC) $(EDCFLAGS) -o $@ -c $<

.PHONY: clean

clean:
	$(RM) *.out
	$(RM) *.o
	$(RM) src/*.o