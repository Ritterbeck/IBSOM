#------------------------------------------------------------------------------
# Generic Makefile
# Author: Brent A. Ritterbeck
# Date: September 25, 2024
#
# Changelog:
# 	0.01 - First version
#------------------------------------------------------------------------------

TARGET = ibsom

CC = gcc
CFLAGS = -std=c17 -Wall -Werror -pedantic

SRC_DIR = src

all: $(TARGET)

$(TARGET): main.o
	$(CC) -o $(TARGET) main.o

main.o: $(SRC_DIR)/main.c
	$(CC) -c $(CFLAGS) $(SRC_DIR)/main.c

clean:
	rm ibsom main.o
