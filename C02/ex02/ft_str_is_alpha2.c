/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjenog <cjenog@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 16:10:46 by cjenog            #+#    #+#             */
/*   Updated: 2021/02/28 17:48:16 by cjenog           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	printf("str에 들어 있는 값 :%s \n",str);
	while (str[i] != 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
		}
		else
			return (0);
		i++;
	}
	printf("while문 빠져나옴\n");
	return (1);
}
