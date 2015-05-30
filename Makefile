CC=gcc
TARGET=crap
SRCS=crap1.c
OBJS=$(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

*.o:*.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all
