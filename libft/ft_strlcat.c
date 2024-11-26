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

	i = 0;
	j = ft_strlen(dest);
	while (src[i] && i < size)
	{
		dest[j + i] = src[i];
		i++;
	}
	return (j + i);
}

/*int	main(void)*/
/*{*/
/*	char	*dest = "Hello ";*/
/**/
/*	printf("%zu, %s\n", ft_strlcat(dest, "World!", 3), dest);*/
/*}*/

/*
 * NOTE: size = strlen(dest) - 1
 *		 NUL-terminate, unless size == 0 || dest > size
 */
