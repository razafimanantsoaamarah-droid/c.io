#!/bin/bash

# On utilise une simple chaîne de caractères au lieu d'un tableau
functions="isalpha isdigit isalnum isascii isprint strlen memset bzero memcpy memmove strlcpy strlcat toupper tolower strchr strrchr strncmp memchr memcmp strnstr atoi"

for func in $functions; do
    file="ft_$func.c"
    if [ ! -f "$file" ]; then
        touch "$file"
        echo "$file créé."
    else
        echo "$file existe déjà, création annulée."
    fi
done

