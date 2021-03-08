/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 11:26:21 by rgilles           #+#    #+#             */
/*   Updated: 2021/02/28 13:00:26 by cjenog           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int iterator;
	int swap;

	iterator = 0;
	size -= 1;
	while (iterator < size)
	{
		swap = tab[iterator];
		tab[iterator] = tab[size];
		tab[size] = swap;
		iterator++;
		size--;
	}
}
