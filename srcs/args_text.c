/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_text.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbesson <tbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 13:40:40 by tbesson           #+#    #+#             */
/*   Updated: 2022/01/28 17:00:07 by tbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(va_list args)
{
	char	c;

	c = va_arg(args, int);
	ft_putchar(c);
	return (1);
}

int	ft_printstr(va_list args)
{
	char	*s_arg;

	s_arg = va_arg(args, char *);
	ft_putstr(s_arg);
	if (!s_arg)
		return (ft_strlen("(null)"));
	return (ft_strlen(s_arg));
}
