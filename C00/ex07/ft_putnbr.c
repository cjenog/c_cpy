/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 17:31:51 by rgilles           #+#    #+#             */
/*   Updated: 2021/03/01 14:50:50 by cjenog           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int nbr_unsigned;

	if (nb < 0)
	{
		nbr_unsigned = (-1 * nb);
		ft_putchar('-');
	}
	else
		nbr_unsigned = nb;
	if (nbr_unsigned >= 10)
	{
		ft_putnbr(nbr_unsigned / 10);
/'/		ft_putnbr(nbr_unsigned % 10);
	}
	else
		ft_putchar(nbr_unsigned + '0');
}
