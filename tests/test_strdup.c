/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maherraz <maherraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 06:33:07 by maherraz          #+#    #+#             */
/*   Updated: 2026/02/10 06:34:12 by maherraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_strdup(void)
{
	char	*str;

	str = ft_strdup("Hello");
	printf("ft_strdup: ");
	if (str && strcmp(str, "Hello") == 0)
	{
		free(str);
		printf("✓\n");
	}
	else
		printf("✗\n");
}

int	main(void)
{
	test_strdup();
	return (1);
}