/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rha-le <rha-le@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 20:11:27 by rha-le            #+#    #+#             */
/*   Updated: 2024/10/15 20:25:12 by rha-le           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int num;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13)
		|| str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{

	}
	return (num);
}

#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	char *str1 = "123";
	char *str2 = "123";
	char *str3 = "a123";
	char *str4 = "12a3";

	printf("%i", ft_atoi(str1));
	printf("%i", atoi(str1));

	printf("%i", ft_atoi(str2));
	printf("%i", atoi(str2));

	printf("%i", ft_atoi(str3));
	printf("%i", atoi(str3));

	printf("%i", ft_atoi(str4));
	printf("%i", atoi(str4));
}
