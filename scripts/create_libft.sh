#!/bin/bash
functions=( isalpha isdigit isalnum isascii isprint strlen memset bzero memcpy memmove strlcpy strlcat toupper tolower strchr strrchr strncmp memchr memcmp strnstr atoi )

for func in "${functions[@]}"; do
    touch "ft_$func.c"
done

