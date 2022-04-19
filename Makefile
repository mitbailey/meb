CC = gcc
COBJS = src/print_test.o
EDCFLAGS = -I ./ -I ./include/ -Wall -pthread $(CFLAGS)
EDLDFLAGS :=
TARGET = print_test.out

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