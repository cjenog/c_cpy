/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nor1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjenog <cjenog@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:11:54 by cjenog            #+#    #+#             */
/*   Updated: 2021/03/04 17:54:10 by cjenog           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nb, char *base)
{
	char	j[10];
	int		len1;
	int		i;
	int		nbr;

	i = 0;
	len = 8;
	j[0] = 'h';
	if (i == 0)
	{
		nbr = nb;
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = -nbr;
		}
		while (nbr / len1 != 0)
		{
			j[i++] = nbr % len1;
			nbr = nbr / len1;
		}
		j[i] = nbr % len1;
		while (i >= 0)
			ft_putchar(j[0]);
	}
}
