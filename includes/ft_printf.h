/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbesson <tbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 17:07:06 by tbesson           #+#    #+#             */
/*   Updated: 2022/01/28 17:40:59 by tbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

void			ft_putchar(char c);
void			ft_putnbr(int nb);
void			ft_putstr(char *s);
int				ft_putnbr_unsigned(unsigned long long int nb, char *base);
int				ft_printf(const char *s, ...);
int				ft_strlen(const char *s);
int				ft_printinteger(va_list args);
int				ft_printunsigned(va_list args);
int				ft_printpointer(va_list args);
int				ft_printhexa_lower(va_list args);
int				ft_printhexa_upper(va_list args);
int				ft_printchar(va_list args);
int				ft_printstr(va_list args);
int				ft_nblen(int nb);
unsigned int	ft_unsignedlen(unsigned int nb);

#endif
