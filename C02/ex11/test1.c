/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 18:32:25 by rgilles           #+#    #+#             */
/*   Updated: 2021/03/02 23:46:57 by cjenog           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char s)
{
	write(1, &s, 1);
}

void	hex(char c, int i)
{
	char	hex1;

	while (i--)
	{
		if (i == 1)
			hex1 = c / 16;
		else if(i == 0)
			hex1 = c % 16;
		if (hex1 > 9)
		{
			hex1 = (hex1 - 10) + 'a';
			ft_putchar(hex1);
		}
		else
			ft_putchar(hex1 + '0');
	}
}

void	ft_putstr_non_printable(char *str)
{
	char *charptr;
	int		i;

	charptr = str;
	while (*charptr != 0)
	{
		if (*charptr <= 31 || *charptr == 127)
		{	
			ft_putchar('\\');
			i = 1;
			if ( *charptr > 9)
				i = 2;
			else
				ft_putchar('0');
			hex(*charptr,i);
		}
		else
			ft_putchar(*charptr);
		charptr++;
	}
}
