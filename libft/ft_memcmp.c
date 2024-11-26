/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rha-le <rha-le@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:14:00 by rha-le            #+#    #+#             */
/*   Updated: 2024/11/26 17:26:17 by rha-le           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (str2[i] == str1[i] && i <= n && str1[i])
		i++;
	return (str1[i] - str2[i]);
}

/*#include <string.h>*/
/*#include <stdio.h>*/
/**/
/*void	print_testcase(unsigned char *test[])*/
/*{*/
/*	size_t len[] = {*/
/*					sizeof(test[0]),\*/
/*					sizeof(test[0]) - 1,\*/
/*					sizeof(test[0]) + 1*/
/*					};*/
/*	printf("= memcmp ============= ft_memcmp =\n");*/
/*	printf("  %d			", memcmp(test[0], test[1], len[0]));*/
/*	printf("%d\n", ft_memcmp(test[0], test[1], len[0]));*/
/*	printf("  %d			", memcmp(test[0], test[1], len[1]));*/
/*	printf("%d\n", ft_memcmp(test[0], test[1], len[1]));*/
/*	printf("  %d			", memcmp(test[0], test[1], len[2]));*/
/*	printf("%d\n", ft_memcmp(test[0], test[1], len[2]));*/
/*	printf("==================================\n");*/
/*}*/
/**/
/*int	main(void)*/
/*{*/
/*	char *test1[] = { "hællö", "hællö" };*/
/*	char *test2[] = { "hel", "hello"};*/
/*	char *test3[] = { "hepl", "hello"};*/
/*	char *test4[] = { "", "hello"};*/
/*	print_testcase((unsigned char **)test1);*/
/*	print_testcase((unsigned char **)test2);*/
/*	print_testcase((unsigned char **)test3);*/
/*	print_testcase((unsigned char **)test4);*/
/*}*/
