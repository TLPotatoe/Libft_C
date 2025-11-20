/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:00:30 by tlamit            #+#    #+#             */
/*   Updated: 2025/11/20 18:11:42 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

size_t	printf_ft_strlen(const char *s);
void	printf_ft_putnbr_fd(int n, int fd, int *i);
int		count_args_n(const char *s);
void	printf_ft_putstr_fd(char *s, int fd, int *i);
void	printf_ft_putchar_fd(char c, int fd, int *i);
int		ft_printf(const char *str, ...) __attribute__((format(printf, 1, 2)));
char	*printf_ft_strchr(const char *s, int c);
int		get_perfect_len(const char *str);
void	ft_putlongnbr_fd(long int n, int fd, int *i);
char	is_format(const char *format, char c);
void	handle_type(const char *s, va_list arglist, int *i);
void	ft_puthex_fd(unsigned long int n, int fd, unsigned int upper, int *i);
char	*printf_ft_substr(char const *s, unsigned int start, size_t len);
size_t	printf_ft_strlcpy(char *dst, const char *src, size_t size);

#endif