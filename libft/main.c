/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rha-le <rha-le@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:59:28 by rha-le            #+#    #+#             */
/*   Updated: 2024/11/12 16:15:21 by rha-le           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	test_atoi(char *str)
{
	printf("\n===== Y O U R  F U N C T I O N == [ %i ] ======\n", ft_atoi(str));
	printf("===== T H E  S O L U T I O N ==== [ %i ] ======\n", atoi(str));
	printf("\n");
}

void	test_strchr(char *str, char *c)
{
		printf("\n===== Y O U R  F U N C T I O N == [ %s ] ======\n", ft_strchr(str, c[0]));
		printf("===== T H E  S O L U T I O N ==== [ %s ] ======\n", strchr(str, c[0]));
		printf("\n");
}

void	test_strrchr(char *str, char *c)
{
		printf("\n===== Y O U R  F U N C T I O N == [ %s ] ======\n", ft_strrchr(str, c[0]));
		printf("===== T H E  S O L U T I O N ==== [ %s ] ======\n", strrchr(str, c[0]));
		printf("\n");
}

void	test_strncmp(char *s1, char *s2, size_t n)
{
		printf("\n===== Y O U R  F U N C T I O N == [ %i ] ======\n", ft_strncmp(s1, s2, n));
		printf("===== T H E  S O L U T I O N ==== [ %i ] ======\n", strncmp(s1, s2, n));
		printf("\n");
}

// void	test_strnstr(const char *haystack, const char *needle, size_t n)
// {
// 		printf("\n===== Y O U R   A N S W E R == [ %s ] ======\n", ft_strnstr(haystack, needle, n));
// 		printf("=== T H E  S O L U T I O N == [ %s ] ===\n", strnstr(haystack, needle, n));
// 		printf("\n");
// }

int	main(int argc, char *argv[])
{
	(void)argc;
	char	*endptr;
	if (strncmp(argv[1], "atoi", 4) == 0)
		test_atoi(argv[2]);

	if (strncmp(argv[1], "strchr", 6) == 0)
		test_strchr(argv[2], argv[3]);

	if (strncmp(argv[1], "strrchr", 7) == 0)
		test_strrchr(argv[2], argv[3]);

	if (strncmp(argv[1], "strncmp", 7) == 0)
		test_strncmp(argv[2], argv[3], (size_t)strtoul(argv[4], &endptr, 10));

	// if (strncmp(argv[1], "strnstr", 7) == 0)
	// 	test_strnstr(argv[2], argv[3], (size_t)strtoul(argv[4], &endptr, 10));

}