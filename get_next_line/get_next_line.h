/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rha-le <rha-le@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:31:42 by rha-le            #+#    #+#             */
/*   Updated: 2024/12/18 17:13:21 by rha-le           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>

# ifndef OPEN_FD
#  define OPEN_FD 4092
# endif

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

typedef struct s_vars
{
	char	*line[OPEN_FD];
	char	*buf;
	ssize_t	bytes_read;
	int		len;
	int		i;
} t_vars;

int		ft_strlen(const char *s);
void	*ft_memcpy(void *dest, const void *src, size_t n);
char	*get_next_line(int fd);

#endif
