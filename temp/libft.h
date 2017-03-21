/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftlib.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 12:53:41 by ggladkov          #+#    #+#             */
/*   Updated: 2017/03/16 09:10:38 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>

void	*ft_memset(void *str, int c, size_t len);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
void	*ft_memset(void *str, int c, size_t len);
void	ft_bzero(void *s, size_t n);
char	*ft_strcpy(char *dst, const char *src);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strncat(char *s1, const char *s2, size_t n);
char	*ft_strstr(const char *big, const char *little);
char	*ft_strnstr(const char *bit, const char *little, size_t len);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned in, char *));
char 	*ft_strmap(char const *s, char (*f)(char));
int		ft_strequ(char const *s1, char const *s2);
int		ft_strenqu(char const *s1, char const *s2, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_isprint(int c);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
char	**ft_strplit(char const *s, char c);
int		ft_atoi(const char *str);
int		ft_isascii(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

void	ft_putendl(const char *s);
void	ft_putnbr(int n);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(const char *s, int fd);
void	ft_putstr(char *str);
int		isupper(int c);
int		ft_strsize(char *str);

#endif