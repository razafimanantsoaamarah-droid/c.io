/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maherraz <maherraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 05:46:07 by maherraz          #+#    #+#             */
/*   Updated: 2026/02/10 06:50:24 by maherraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	del_content(void *content)
{
	free(content);
}

void	print_content(void *content)
{
	printf("%s ", (char *)content);
}

void	*upper_content(void *content)
{
	char	*str;
	char	*new_str;
	int		i;

	str = (char *)content;
	new_str = (strlen(str) + 1);
	if (!new_str)
		return (NULL);
	i = 0
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			new_str[i] = str[i] - 32;
		else
			new_str[i] = str[i];
		i++
	}
	new_str[strlen(str)] = '\0';
	return (new_str);
}

int	main(void)
{
	t_list	*node;
	t_list	*new_node;
	t_list	*list;
	
	printf("=== Tests des fonctions bonus ===\n\n");
	printf("ft_lstnew: ");
	node = ft_lstnew(strdup("First"));
	if (node && node->content
		&& !strcmp(node->content, "First") && !node->next)
		printf("✓\n");
	else
		printf("✗\n");

	printf("ft_lstadd_front: ");
	list = node;
	new_node = (strdup("Second"));
	ft_lstadd_front(&list, new_node);
	if (list == new_node && list->next == node)
		printf("✓\n");
	else
		printf("✗\n");

	printf("ft_lstsize: ");
	if (ft_lstsize(list) == 2)
		printf("✓\n");
	else
		printf("✗\n");

	printf("ft_lstlast: ");
	if (ft_lstlast(list) == node)
		printf("✓\n");
	else
		printf("✗\n");

	ft_lstclear(&list, del_content);

	printf("\n=== Tests bonus terminés ===\n");
	return 0;
}
