/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjenog <cjenog@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 20:37:15 by cjenog            #+#    #+#             */
/*   Updated: 2021/03/04 20:52:01 by cjenog           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int sign;
	int c_to_i;
	
	sign = 1;
	i = 0;
	c_to_i = 0;
	while (str[i] == 32 || (str[i] >=9 && str[i] <=13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;	
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		c_to_i = (c_to_i * 10) + (str[i] - '0');
		i++;
	}
	return (c_to_i * sign);
}
