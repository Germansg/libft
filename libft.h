/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftlib.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 12:53:41 by ggladkov          #+#    #+#             */
/*   Updated: 2017/02/27 22:11:27 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>

void	*ft_memset(void *str, int c, int len);//not done
char	*ft_strcpy(char *dst, const char *src);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);//look over
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		isupper(int c);

#endif
