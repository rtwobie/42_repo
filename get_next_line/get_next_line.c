/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rha-le <rha-le@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:30:58 by rha-le            #+#    #+#             */
/*   Updated: 2024/12/09 20:14:28 by rha-le           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ababa(void)
{
	static t_list oy;
	++oy.len;
	return (oy.len);
}

#include <stdio.h>
#include <fcntl.h>
int main(void)
{
	printf("%d\n", ababa());
}
