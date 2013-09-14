CC=gcc -std=c99
CFLAGS = -W -Wall
EXEC = projetopi
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)
LIBS=-lallegro -lallegro_audio -lallegro_acodec -lallegro_image -lallegro_font -lallegro_main -lallegro_ttf -lallegro_primitives -lm

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

# $< está pegando a dependência mais recente.
%.o:%.c
	$(CC) -o $@ -c $< $(CFLAGS)

# .PHONY: clean

# clean:
# rm -rf *.o


