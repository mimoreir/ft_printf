/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 09:19:03 by mimoreir          #+#    #+#             */
/*   Updated: 2022/12/05 09:19:06 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *s, ...);
int		printchar(const char c);
int		formats(va_list args, const char format);
int		printnbr(int num);
int		printstr(char *str);
int		numlen(int num);
int		printhexa(unsigned int num, const char format);
void	printupperhex(unsigned int num);
void	printlowerhex(unsigned int num);
int		hexlen(unsigned int num);
int		printpointer(unsigned long long ptr);
void	printptr(unsigned long long num);
int		lenptr(unsigned long long num);
char	*ft_uitoa(unsigned int n);
int		unsiglen(unsigned int num);
int		printuns(unsigned int num);

#endif
