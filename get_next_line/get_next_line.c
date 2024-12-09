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
#include <stdlib.h>
#include <unistd.h>

char	*read_line(int fd, int count)
{
	char	*s;

	return (s);
}

char	*get_next_line(int fd)
{
	static t_list	*text;
	t_list			*temp;
	char			*s;

	text = NULL;
	s = read_line(fd, /*line count*/);
	ft_lstadd_back(&text, ft_lstnew(s));
	temp = text;
	text = temp->next;
	return (temp->line);
}

#include <stdio.h>
#include <fcntl.h>
int main(void)
{
	int fd;

	fd = open("test.txt", O_RDONLY);
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
}
