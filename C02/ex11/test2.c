/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 18:32:25 by rgilles           #+#    #+#             */
/*   Updated: 2021/03/03 00:12:13 by cjenog           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char s)
{
	write(1, &s, 1);
}

void	hex(char c)
{
	char	hex1[2];
	int		i;

	i = -1;
	hex1[0] = c / 16;  
	hex1[1] = c % 16;   

	while (++i < 2)
	{	
		if ( hex1[i] > 9)
		{
			ft_putchar((hex1[i] - 10) + 'a');
		}
		else
			ft_putchar(hex1[i] + '0');
	}
}

void	ft_putstr_non_printable(char *str)
{
	char *charptr;

	charptr = str;
	while (*charptr != 0)
	{
		if (*charptr <= 31 || *charptr == 127)
		{	
			ft_putchar('\\');
			hex(*charptr);
		}
		else
			ft_putchar(*charptr);
		charptr++;
	}
}
