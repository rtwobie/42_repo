/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rha-le <rha-le@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:22:40 by rha-le            #+#    #+#             */
/*   Updated: 2024/11/12 18:50:15 by rha-le           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (ft_strlen(dest) > ft_strlen(src))
	{
		i = n;
		while (i >= 0)
		{
			d[i] = s[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

// FIX:
/*[fail]: your memmove does not support the overlap (test 1)*/
/*[crash]: your memmove does not support the overlap (test 2)*/
/*[crash]: your memmove crash because it read too many bytes or attempt to read on dst !*/
/*[crash]: your memmove does not well with NULL as both parameters*/
/*[crash]: your memmove does not well with NULL as both parameters and size*/

