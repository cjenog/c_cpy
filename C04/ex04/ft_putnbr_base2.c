/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjenog <cjenog@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:11:54 by cjenog            #+#    #+#             */
/*   Updated: 2021/03/04 17:56:17 by cjenog           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_len(char *ptr)
{
	int i;

	i = 0;
	while (ptr[i])
		i++;
	return (i);
}

int	ft_exception(char *ptr)
{
	int i;
	int j;

	i = 0;
	if (ptr[0] == 0 || ptr[1] == 0)
		return (1);
	while (ptr[i])
	{
		if (ptr[i] == '-' || ptr[i] == '+')
			return (1);
		j = i + 1;
		while (ptr[j])
		{
			if (ptr[i] == ptr[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nb, char *base)
{
	char	j[10];
	int		len1;
	int		i;
	int		nbr;

	len1 = ft_len(base);
	i = ft_exception(base);
	if (i == 0)
	{
		i = 0;
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
			ft_putchar(base[(int)j[i--]]);
	}
}
