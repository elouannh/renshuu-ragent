# Variables
CC=gcc
CFLAGS=-Wall -Wextra -Werror -lcurl
INCLUDES=-I./src/fs -I./src/memory_tracker -I./src/rest -I./src/tools
SRCS=$(wildcard src/fs/*.c) $(wildcard src/memory_tracker/*.c) $(wildcard src/rest/*.c) $(wildcard src/tools/*.c) src/main.c
OBJS=$(SRCS:.c=.o)
TARGET=renshuu_ragent

# Règle par défaut
all: $(TARGET)

# Règle pour lier les fichiers objets et créer l'exécutable
$(TARGET): $(OBJS)
	$(CC) -o $@ $^ $(CFLAGS)

# Règle générique pour compiler chaque fichier source en fichier objet
%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS) $(INCLUDES)

# Nettoyage des fichiers objets
clean:
	rm -f $(OBJS)

# Nettoyage complet (fichiers objets + exécutable)
mrproper: clean
	rm -f $(TARGET)

.PHONY: all clean mrproper
