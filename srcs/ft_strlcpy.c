
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maherraz <maherraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 13:06:28 by maherraz          #+#    #+#             */
/*   Updated: 2026/01/24 13:06:32 by maherraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int ft_strlcpy(char *dest, const char *src, unsigned int size)
{
    unsigned int src_len = 0;
    unsigned int i;

    while (src[src_len] != '\0')
        src_len++;
    if (size == 0)
        return src_len;
    i = 0;
    while (src[i] != '\0' && i < (size - 1))
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return src_len;
}