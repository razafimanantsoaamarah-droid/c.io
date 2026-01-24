
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maherraz <maherraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 14:20:05 by maherraz          #+#    #+#             */
/*   Updated: 2026/01/24 14:20:06 by maherraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *s, int c)
{
    const char *last_occurrence = '\0';
    while (*s)
    {
        if (*s == (char)c)
            last_occurrence = s;
        s++;
    }
    if (c == '\0')
        return (char *)s;
    return (char *)last_occurrence;
}