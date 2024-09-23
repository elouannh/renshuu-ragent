CC=gcc
CFLAGS=-Wall -Wextra -Werror -lcurl
INCLUDES=-I./src/args \
	-I./src/errors \
	-I./src/fs \
	-I./src/memory_tracker \
	-I./src/rest \
	-I./src/tools
SRCS=$(wildcard src/args/*.c) \
	$(wildcard src/errors/*.c) \
	$(wildcard src/fs/*.c) \
	$(wildcard src/memory_tracker/*.c) \
	$(wildcard src/rest/*.c) \
	$(wildcard src/tools/*.c) \
	src/main.c
OBJS=$(SRCS:.c=.o)
TARGET=renshuu

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $^ $(CFLAGS)

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS) $(INCLUDES)

clean:
	rm -f $(OBJS)

mrproper: clean
	rm -f $(TARGET)

.PHONY: all clean mrproper
