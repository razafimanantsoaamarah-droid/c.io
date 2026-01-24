
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maherraz <maherraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 14:26:16 by maherraz          #+#    #+#             */
/*   Updated: 2026/01/24 14:26:17 by maherraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strnstr(const char *haystack, const char *needle, unsigned int len)
{
    unsigned int i;
    unsigned int j;

    if (needle[0] == '\0')
        return (char *)haystack;
    for (i = 0; haystack[i] != '\0' && i < len; i++)
    {
        j = 0;
        while (haystack[i + j] == needle[j] && (i + j) < len)
        {
            if (needle[j + 1] == '\0')
                return (char *)(haystack + i);
            j++;
        }
    }
    return '\0';
}