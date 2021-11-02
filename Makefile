CC = gcc
COBJS = src/main.o
EDCFLAGS = -I ./ -I ./include/ -Wall -pthread $(CFLAGS)
EDLDFLAGS :=
TARGET = sim.out

all: $(COBJS)
	$(CC) $(EDCFLAGS) $(COBJS) -o $(TARGET) $(EDLDFLAGS)
	sudo ./$(TARGET)

%.o: %.c
	$(CC) $(EDCFLAGS) -o $@ -c $<

.PHONY: clean

clean:
	$(RM) *.out
	$(RM) *.o
	$(RM) src/*.o

# .PHONY: spotless

# spotless:
# 	$(RM) drivers/*.o