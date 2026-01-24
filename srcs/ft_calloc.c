
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maherraz <maherraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 14:33:35 by maherraz          #+#    #+#             */
/*   Updated: 2026/01/24 14:33:36 by maherraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    void *ptr;

    ptr = malloc(count * size);
    if (ptr == NULL)
        return (NULL);
    size_t i;
    i = 0;
    while (i < count * size)
    {
        ((char *)ptr)[i] = 0;
        i++;
    }
    return (ptr);
}