/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarustam <nnarustamyam@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 23:21:24 by aarustam          #+#    #+#             */
/*   Updated: 2024/02/01 19:48:55 by aarustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <sys/types.h>

void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *str);

void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memset(void *b, int c, size_t len);

size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *haystack,
			const char *needle, size_t len);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

//char	*ft_strstr(const char *haystack, const char *needle);
//char	*ft_strcpy(char *dst, const char *src);
//char	*ft_strncpy(char *dest, const char *src, size_t len);
//char	*ft_strcat(char *s1, const char *s2);
//char	*ft_strncat(char *s1, const char *s2, size_t n);
//int		ft_strcmp(const char *s1, const char *s2);

int		ft_atoi(const char *str);

int		ft_isalpha(int c);
int		ft_isdigit(int t);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

#endif
