/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjenog <cjenog@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 09:03:07 by cjenog            #+#    #+#             */
/*   Updated: 2021/03/01 09:31:12 by cjenog           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i =0;
	while(s1[i] && s1[i] == s2[i])
	{	
		i++;
	}
	return (s1[i] - s2[i]);
}
