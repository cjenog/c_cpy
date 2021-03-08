/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjenog <cjenog@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 11:47:58 by cjenog            #+#    #+#             */
/*   Updated: 2021/03/04 12:09:22 by cjenog           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int lnb)
{
	long	lnb;
	char c_ptr[10];
	int		i;

	lnb = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		lnb = -lnb;
	}
	i = 0;
	while (lnb > 0)
	{
		c_ptr[i] = lnb % 10;
		lnb /= 10;
		i++;
	}
	
	while (i--)
		ft_putchar(c_ptr[i] + '0');
}
