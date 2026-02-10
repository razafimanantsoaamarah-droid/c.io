/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maherraz <maherraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 06:30:53 by maherraz          #+#    #+#             */
/*   Updated: 2026/02/10 06:39:16 by maherraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	test_atoi(void)
{
	printf("ft_atoi: ");
	if (ft_atoi("42") == 42 && ft_atoi("-42") == -42
		&& ft_atoi("   +123") == 123
		&& ft_atoi("   -456") == -456)
		printf("✓\n");
	else
		printf("✗\n");
}

int	main(void)
{
	test_atoi();
	return (1);
}
