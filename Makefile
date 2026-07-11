IDIR := ./include
BIN := ./bin

CC := gcc
CFLAGS := -I $(IDIR) -g 
DEBUG_FLAGS := -Wall -Wextra -pedantic -Werror

TARGET := cpu
SRCS := $(wildcard *.c)

all: $(BIN)/$(TARGET)

debug: CFLAGS += $(DEBUG_FLAGS)
debug: $(BIN)/$(TARGET)

$(BIN)/$(TARGET): $(SRCS) | $(BIN)
	$(CC) $(CFLAGS) $(SRCS) -o $@

$(BIN):
	mkdir -p $(BIN)

clean:
	rm -f $(BIN)/$(TARGET)

.PHONY: all debug clean
