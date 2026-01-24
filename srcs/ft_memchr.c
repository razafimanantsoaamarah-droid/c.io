
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maherraz <maherraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 02:19:54 by maherraz          #+#    #+#             */
/*   Updated: 2026/01/25 02:19:55 by maherraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void *ft_memchr(const void *s, int c, unsigned int n)
{
    const unsigned char *str;
    unsigned int i;

    str = (const unsigned char *)s;
    i = 0;
    while (i < n)
    {
        if (str[i] == (unsigned char)c)
            return ((void *)&str[i]);
        i++;
    }
    return (NULL);
}