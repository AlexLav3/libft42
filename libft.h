/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elavrich <elavrich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 00:23:37 by elavrich          #+#    #+#             */
/*   Updated: 2024/09/17 21:39:00 by elavrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

// ko
int		ft_atoi(char *str);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	**ft_split(const char *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
// to start
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
// ok
void	ft_bzero(void *s, size_t n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_isalnum(int c);
size_t	ft_strlen(char *str);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int		ft_isascii(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	*ft_memset(void *s, int c, size_t n);
size_t	ft_strlcpy(char *dst, char *src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
