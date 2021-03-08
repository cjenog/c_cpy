/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjenog <cjenog@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 23:27:17 by cjenog            #+#    #+#             */
/*   Updated: 2021/03/03 23:37:57 by cjenog           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int res_d;
	unsigned int res_s;
	int j;

	i = 0;
	res_d = ft_strlen(dest);
	j = ft_strlen(dest);
	res_s = ft_strlen(src);
	if (size < 1 ||  size < res_d)
		return (res_s + size);
	while (src[i] && res_d < size - 1)
	{
		dest[res_d] = src[i];
		res_d++;
		i++;
	}
	dest[res_d] = '\0';
	return (j + res_s);
}

