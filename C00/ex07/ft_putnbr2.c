/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjenog <cjenog@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 05:30:21 by cjenog            #+#    #+#             */
/*   Updated: 2021/03/03 10:38:39 by cjenog           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	unb;
	char			ch1[10];
	int				i;

	i = 0;
	unb = 0;
	if (nb < 0)
	{
		unb = -nb;
		ft_putchar('-');
	}
	else if (nb == 0)
		ft_putchar('0');
	else
		unb = nb;
	while (unb != 0)
	{
		ch1[i] = (unb % 10) + '0';
		unb /= 10;
		i++;
		while (i-- != 0)
	{
		ft_putchar(ch1[i]);
	}
}
