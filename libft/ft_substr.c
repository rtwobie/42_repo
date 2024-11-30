/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rha-le <rha-le@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 23:06:01 by rha-le            #+#    #+#             */
/*   Updated: 2024/12/01 00:38:35 by rha-le           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*substr;

	substr = (char *)malloc(sizeof(*str) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (i >= start && j < len)
		{
			substr[j] = str[i];
			j++;
		}
		i++;
	}
	substr[j] = '\0';
	return (substr);
}

/*#include <stdio.h>*/
/*int main(void)*/
/*{*/
/*	char *sub = ft_substr("Hallo", 8, 13);*/
/*	printf("%s\n", sub);*/
/*	free(sub);*/
/*}*/
