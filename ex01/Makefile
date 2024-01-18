# Nom de l'exécutable
NAME = PhoneBook

# Compilateur
CC = c++

# Flags de compilation
CFLAGS = -Wall -Wextra -Werror -std=c++98

# Fichiers sources
SRC = srcs/main.cpp lib/PhoneBook.cpp lib/Contact.cpp

# Règle par défaut
all: $(NAME)

# Règle pour construire l'exécutable
$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

# Règle pour nettoyer les fichiers compilés
clean:
	rm -f $(NAME)

# Règle pour recompiler le projet
re: clean all

# Règle pour éviter certains conflits de noms
.PHONY: all clean re
