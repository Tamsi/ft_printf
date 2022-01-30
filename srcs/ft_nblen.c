/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nblen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbesson <tbesson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 14:38:38 by tbesson           #+#    #+#             */
/*   Updated: 2022/01/28 17:12:52 by tbesson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nblen(int nb)
{
	unsigned int	len;
	unsigned int	my_nb;

	if (nb == 0)
		return (1);
	len = 0;
	my_nb = nb;
	if (nb < 0)
	{
		my_nb = -nb;
		len++;
	}
	while (my_nb > 0)
	{
		my_nb = my_nb / 10;
		len++;
	}
	return (len);
}

unsigned int	ft_unsignedlen(unsigned int nb)
{
	unsigned int	len;

	if (nb == 0)
		return (1);
	len = 0;
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}
