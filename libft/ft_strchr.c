/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rha-le <rha-le@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:21:27 by rha-le            #+#    #+#             */
/*   Updated: 2024/12/02 22:47:57 by rha-le           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * NOTE:
 *		Finds the first occurence of c in str
 */
char	*ft_strchr(const char *str, int c)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i++;
	}
	if ((char)c == '\0')
		return ((char *)(str + i));
	return (0);
}

/*#include <string.h>*/
/*#include <stdio.h>*/
/*int main(void)*/
/*{*/
/*	printf("%s\n", strchr("teste", 'e'));*/
/*	printf("%s\n", ft_strchr("teste", 'e'));*/
/*}*/
