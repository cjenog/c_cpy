/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjenog <cjenog@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 17:53:08 by cjenog            #+#    #+#             */
/*   Updated: 2021/02/28 17:55:43 by cjenog           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int i;

	i =0;
	while(str[i] != 0)
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}