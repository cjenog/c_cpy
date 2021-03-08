/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjenog <cjenog@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 16:06:15 by cjenog            #+#    #+#             */
/*   Updated: 2021/03/01 16:26:10 by cjenog           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int max;

	max = 1;
	if (nb < 0 && (nb / 10) == 0)
		ft_putchar('-');
	if (nb < 0)
		max = -1;
	if (nb / 10 != 0)
		ft_putnbr(nb / 10);
	ft_putchar(((nb % 10) * max) + '0');
}
