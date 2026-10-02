CC=gcc
CFLAGS=-Wall -Wextra -std=c11
SRCS=$(wildcard src/*.c)
OBJS=$(SRCS:.c=.o)
EXEC=adaptive-spaced-repetition-engine

all: $(OBJS)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

run: all
	./$(EXEC)

test: all
	./test_runner

.PHONY: clean

clean:
	rm -f $(OBJS) $(EXEC)
