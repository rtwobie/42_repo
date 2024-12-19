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
#include <stdio.h>

/**
 * NOTE: the next get_next_line() call doesnt give out the next line :(
 */

char	*get_next_line(int fd)
{
	static t_vars	gn;

	while (gn.line[fd] && gn.line[fd][gn.len])
		gn.len++;
	printf("line: %s\n", gn.line[fd]);
	printf("len: %d\n", gn.len);

	gn.buf = (char *) malloc(sizeof(char) * (gn.len + BUFFER_SIZE + 1));
	if (!gn.buf)
		return (printf("malloc fail\n"), NULL);
	gn.bytes_read = read(fd, gn.buf + gn.len, BUFFER_SIZE);
	if (gn.bytes_read < 0)
		return (free(gn.buf), free(gn.line), NULL);
	printf("bytes read: %zu\n", gn.bytes_read);

	gn.buf[gn.len + gn.bytes_read] = 0;

	while (gn.len-- > 0)
		gn.buf[gn.len] = gn.line[fd][gn.len]; // copy line to 1st part of buffer + reset len to 0

	while (gn.buf[gn.len] != 0 && gn.buf[gn.len] != '\n') // increase len to be the size of '\n' or EOF
		gn.len++;

	if (gn.buf[gn.len] == '\n')
	{
		gn.buf[gn.len] = 0;
		free(gn.line[fd]);
		gn.line[fd] = NULL;
		return (printf("out1: "), gn.buf);
	}

	if (gn.buf[gn.len] == 0 && gn.bytes_read != BUFFER_SIZE)
		return (printf("out2: "), gn.buf);

	if (gn.buf[gn.len] != '\n')
	{
		gn.len = 0;
		gn.line[fd] = gn.buf;
		return (get_next_line(fd));
	}
	return (printf("wrong one!\n"), gn.buf);
}

#include <fcntl.h>
int main(void)
{
	int fd;
	char *line;

	fd = open("test.txt", O_RDONLY);
	line = get_next_line(fd);
	printf("%s\n", line);
	free (line);
	line = get_next_line(fd);
	printf("%s\n", line);

	free(line);
}
