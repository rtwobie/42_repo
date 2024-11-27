/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rha-le <rha-le@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 20:18:14 by rha-le            #+#    #+#             */
/*   Updated: 2024/11/12 17:21:40 by rha-le           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int		ft_isalnum(int c); // PASSED:
int		ft_isalpha(int c); // PASSED:
int		ft_isascii(int c); // PASSED:
int		ft_isdigit(int c); // PASSED:
int		ft_isprint(int c); // PASSED:
int		ft_isspace(int c);
int		ft_toupper(int c); // PASSED:
int		ft_tolower(int c); // PASSED:
int		ft_strlen(const char *s); // PASSED:
int		ft_atoi(const char *nptr); // PASSED:
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char dest[], const char *src, size_t size); // PASSED:
void	ft_bzero(void *s, size_t n); // PASSED:
void	*ft_memset(void *s, int c, size_t n); // PASSED:
void	*ft_memcpy(void *dest, const void *src, size_t n); // PASSED:
void	*ft_memmove(void *dest, void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strdup(const char *src); // PASSED:

// TODO:
//		[x] ft_memcmp();
//		[x] ft_strlcpy();
//		[x] ft_strlcat();
//		[ ] ft_calloc();
//		[x] ft_strdup();

// BOUNTY:
//		[ ] memmove();
//		[ ] strlcat();
//		[ ] strchr();
//		[ ] strrchr();
//		[ ] strncmp();
//		[ ] memchr();
//		[ ] memcmp();
//		[ ] strnstr();
//		[x] atoi();
//		[x] memcpy();
//		[x] memset();
//		[x] toupper();

#endif
