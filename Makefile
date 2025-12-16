CC = gcc

SRC = $(wildcard *.c)

TARGET = game

LIBS = `pkg-config --cflags --libs sdl3`

PKG_CONFIG = pkg-config
CFLAGS = -Wall -Wextra -std=c11 $(shell $(PKG_CONFIG) --cflags sdl3)
LDFLAGS = $(shell $(PKG_CONFIG) --libs sdl3)

$(TARGET): $(SRC)
	$(CC) $(SRC) -o $(TARGET) $(CFLAGS) $(LDFLAGS)

clean:
	rm -f $(TARGET)
