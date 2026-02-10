/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maherraz <maherraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 02:18:03 by maherraz          #+#    #+#             */
/*   Updated: 2026/02/10 01:37:36 by maherraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, unsigned int len)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst || !src || len == 0)
		return (dst);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d < s)
		while (len--)
			*d++ = *s++;
	else
		while (len--)
			d[len] = s[len];
	return (dst);
}
