
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maherraz <maherraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 11:20:55 by maherraz          #+#    #+#             */
/*   Updated: 2026/01/24 11:20:56 by maherraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


unsigned int ft_strlcat(char *dest, const char *src, unsigned int size)
{
    unsigned int dest_len;
    unsigned int src_len;
    unsigned int i;

    dest_len = 0;
    while (dest[dest_len] != '\0' && dest_len < size)
        dest_len++;
    src_len = 0;
    while (src[src_len] != '\0')
        src_len++;
    if (dest_len == size)
        return size + src_len;
    i = 0;
    while (src[i] != '\0' && (dest_len + i + 1) < size)
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    if (dest_len + i < size)
        dest[dest_len + i] = '\0';
    return dest_len + src_len;
}