/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjenog <cjenog@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 15:50:35 by cjenog            #+#    #+#             */
/*   Updated: 2021/03/01 16:05:49 by cjenog           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int unb;
	
	if(nb < 0)
	{
		unb = -nb;
		ft_putchar('-');
	}
	else
		unb = nb;
	if(unb >= 10)
	{
		ft_putnbr(unb / 10);
		ft_putnbr(unb % 10);
	}
	else
	{
		ft_putchar(unb+'0');
	}
}
