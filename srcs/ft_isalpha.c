/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 15:22:59 by codespace         #+#    #+#             */
/*   Updated: 2026/01/24 15:38:17 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isalpha(int charset)
{
    return ((charset >= 'a' && charset <= 'z') || (charset >= 'A' && charset <= 'Z'));   
}

int main()
{
    printf("%d\n", ft_isalpha('a'));
    printf("%d\n", ft_isalpha(1));
    return(0);
}

    