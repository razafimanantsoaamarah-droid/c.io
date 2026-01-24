
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maherraz <maherraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 10:02:40 by maherraz          #+#    #+#             */
/*   Updated: 2026/01/24 10:02:40 by maherraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
    int ft_isalpha(int c);
    int ft_isdigit(int c);
    int ft_isalnum(int c);
	int ft_isascii(int c);
    int ft_isprint(int c);
    int ft_atoi(const char *str);
    int ft_strncmp(const char *s1, const char *s2, unsigned int n);
    int ft_memcmp(const void *s1, const void *s2, unsigned int n);
    void *ft_memchr(const void *s, int c, unsigned int n);
    void *ft_memset(void *b, int c, unsigned int len);
    void ft_bzero(void *s, unsigned int n);
    void *ft_memcpy(void *dst, const void *src, unsigned int n);
    void *ft_memmove(void *dst, const void *src, unsigned int len);
    unsigned int ft_strlcat(char *dest, const char *src, unsigned int size);
    unsigned int ft_strlen(const char *s);
    unsigned int ft_strlcpy(char *dest, const char *src, unsigned int size);
    unsigned int ft_toupper(int c);
    unsigned int ft_tolower(int c);
    char *ft_strchr(const char *s, int c);
    char *ft_strrchr(const char *s, int c);
    char *ft_strnstr(const char *haystack, const char *needle, unsigned int len);
#endif