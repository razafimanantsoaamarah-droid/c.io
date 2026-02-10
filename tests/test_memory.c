/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memory.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maherraz <maherraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 05:43:43 by maherraz          #+#    #+#             */
/*   Updated: 2026/02/10 05:44:03 by maherraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main(void) {
    printf("=== Tests de mémoire ===\n\n");
    
    // Test ft_calloc
    printf("Test ft_calloc: ");
    int *arr = (int *)ft_calloc(10, sizeof(int));
    if (arr) {
        free(arr);
        printf("OK\n");
    }
    
    // Test ft_split
    printf("Test ft_split: ");
    char **split = ft_split("Hello World Test", ' ');
    if (split) {
        for (int i = 0; split[i]; i++) {
            free(split[i]);
        }
        free(split);
        printf("OK\n");
    }
    
    // Test avec itoa
    printf("Test ft_itoa: ");
    char *str = ft_itoa(-12345);
    if (str) {
        free(str);
        printf("OK\n");
    }
    
    printf("\n=== Tests de mémoire terminés ===\n");
    return 0;
}