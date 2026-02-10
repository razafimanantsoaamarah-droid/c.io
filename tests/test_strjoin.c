/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_basic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maherraz <maherraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 05:47:50 by maherraz          #+#    #+#             */
/*   Updated: 2026/02/10 06:37:58 by maherraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	test_strjoin(void)
{
	char	*str;

	printf("ft_strjoin: ");
	str = ft_strjoin("Hello ", "World");
	if (str && strcmp(str, "Hello World") == 0)
	{
		free(str);
		printf("✓\n");
	}
	else
		printf("✗\n");
}

int	main(void)
{
	test_strjoin();
	return (0);
}
