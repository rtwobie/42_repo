/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rha-le <rha-le@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:06:49 by rha-le            #+#    #+#             */
/*   Updated: 2024/11/26 17:29:13 by rha-le           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dest);
	if (size < i)
		i = size;
	j = 0;
	while (src[j] && j < size - i - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (j < size)
		dest[j + i] = '\0';
	return (i + ft_strlen(src));
}

/*size_t	ft_strlcattt(char *dst, const char *src, size_t size)*/
/*{*/
/*	size_t	i;*/
/*	size_t	j;*/
/**/
/*	i = 0;*/
/*	j = 0;*/
/*	while (dst[i] && i < size)*/
/*		i++;*/
/*	while (src[j] && (i + j + 1) < size)*/
/*	{*/
/*		dst[i + j] = src[j];*/
/*		j++;*/
/*	}*/
/*	if (i < size)*/
/*		dst[i + j] = '\0';*/
/*	return (i + ft_strlen(src));*/
/*}*/

/*int	main(void)*/
/*{*/
/*	char first[20] = "Hello ";*/
/*    char last[] = "World!";*/
/**/
/*    int size = 11;*/
/*    char buffer[size];*/
/**/
/*    strcpy(buffer,first);*/
/*	printf("%zu, %s\n", ft_strlcat(first, last, 9), first);*/
/*}*/

/*
 * NOTE: size = strlen(dest) - 1
 *		 NUL-terminate, unless size == 0 || dest > size
 */
