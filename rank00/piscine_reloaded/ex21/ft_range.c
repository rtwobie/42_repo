/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rha-le <rha-le@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:11:42 by rha-le            #+#    #+#             */
/*   Updated: 2024/11/06 14:49:59 by rha-le           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	range;
	int	i;

	if (max <= min)
		return (NULL);
	range = max - min;
	tab = (int *) malloc(sizeof(int) * (range));
	if (!tab)
		return (NULL);
	i = 0;
	while (tab[i] < range)
		tab[i++] = min++;
	return (tab);
}
