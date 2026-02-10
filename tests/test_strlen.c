/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maherraz <maherraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 06:28:38 by maherraz          #+#    #+#             */
/*   Updated: 2026/02/10 06:36:34 by maherraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	test_strlen(void)
{
	printf("ft_strlen: ");
	if (ft_strlen("") == 0 && ft_strlen("Hello") == 5)
		printf("✓\n");
	else
}

int	main(void)
{
	test_strlen()
	return (1);
}