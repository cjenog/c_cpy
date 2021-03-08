/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjenog <cjenog@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 11:49:14 by cjenog            #+#    #+#             */
/*   Updated: 2021/03/03 21:01:15 by cjenog           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	if (*to_find == 0)
		return (str);
	i = 0;
	while (str[i] != 0)
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == 0)
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}
