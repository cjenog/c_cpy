/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjenog <cjenog@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:10:46 by cjenog            #+#    #+#             */
/*   Updated: 2021/02/28 17:46:16 by cjenog           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	printf("str에 들어있는값 : %s\n",str);
	while (str[i] != 0)
	{	
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	printf("while문빠져나옴\n");
	return (110);
}
