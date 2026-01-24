
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maherraz <maherraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 19:40:11 by maherraz          #+#    #+#             */
/*   Updated: 2026/01/24 19:40:16 by maherraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, unsigned int n)
{
    unsigned int i;
    unsigned char *ptr;

    ptr = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        ptr[i] = 0;
        i++;
    }
}