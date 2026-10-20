CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c11
TARGET = ordenar
SRC = src/main.c src/my_functions.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)