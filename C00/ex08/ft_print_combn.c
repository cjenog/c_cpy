/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 20:33:16 by rgilles           #+#    #+#             */
/*   Updated: 2021/03/02 07:46:49 by cjenog           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int *range, int n)
{
	int	i;
	int	display;
	
//	printf("range[2]값은 %d입니다. \n",range[2]);
	display = 1;
	i = 0;
	while (++i < n)
		if (range[i - 1] >= range[i])
			display = 0;
	if (!display)
		return ;
	i = -1;
	while (++i < n)
		ft_putchar(range[i] + 48);
//	printf("range[2]값은 %d입니다.\n",range[2]);

	if (range[0] < (10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	range[10];

	if (n > 10 || n < 0)
		return ;
	i = -1;
	while (++i < n)
		range[i] = i;
	while (range[0] <= (10 - n) && n >= 1)
	{
		print(range, n);
		if (n == 10)
			break ;
		range[n - 1]++;
		i = n;
		while (i && n > 1)
//		while(i)
		{
			i--;
			if (range[i] > 9)
			{
				range[i - 1]++;
//				range[i] = 0;
				range[i] = range[i - 1];
//				range[i] = (range[i-1] + 1);
//				printf("range[%d]값은 %d 입니다.\n", i, range[i]);
			}
		}
	}
}
