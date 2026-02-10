/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maherraz <maherraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 06:35:34 by maherraz          #+#    #+#             */
/*   Updated: 2026/02/10 06:37:14 by maherraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
void	test_substr(void)
{
	char	*str;

	str = ft_substr("Hello World", 6, 5);
	printf("ft_substr: ");
	if (str && strcmp(str, "World") == 0)
	{
		free(str);
		printf("✓\n");
	}
	else
		printf("✗\n");
}

int	main(void)
{
	test_substr();
	return (1);
}