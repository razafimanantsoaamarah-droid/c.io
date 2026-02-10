/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maherraz <maherraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 06:25:21 by maherraz          #+#    #+#             */
/*   Updated: 2026/02/10 06:27:55 by maherraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	test_isalpha(void)
{
	printf("ft_isalpha: ");
	if (ft_isalpha('a') == isalpha('a')
		&& ft_isalpha('Z') == isalpha('Z')
		&& ft_isalpha('4') == isalpha('5'))
		printf("✓\n");
	else
		printf("✗\n");
}

int	main(void)
{
	test_isalpha();
	return (1);
}