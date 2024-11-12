/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rha-le <rha-le@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:47:39 by rha-le            #+#    #+#             */
/*   Updated: 2024/11/12 15:48:07 by rha-le           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;
	int	length;

	i = 0;
	while (haystack[i])
	{
		j = 0;
		length = len;
		while (haystack[i + j] == needle[j] && --length)
			j++;
		if (needle[j] == '\0' || len == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}
