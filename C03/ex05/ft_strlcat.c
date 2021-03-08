/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 15:55:46 by rgilles           #+#    #+#             */
/*   Updated: 2021/03/03 23:27:00 by cjenog           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	char				*charptr;
	unsigned int		iterator;

	charptr = str;
	iterator = 0;
	while (*charptr != 0)
	{
		iterator++;
		charptr++;
	}
	return (iterator);
}

unsigned int	ft_strlcat(char *dst, char *src, unsigned int siz)
{
	char			*d;
	char			*s;
	unsigned int	n;
	unsigned int	dlen;

	d = dst;   
	s = src;
	n = siz;  //그냥초기화모음
	while (n-- != 0 && *d != '\0')  //  dest가 널이 아닐때 그리고 
		d++;
	dlen = d - dst;
	n = siz - dlen;  //null 은 왜 안뺌? 아마 나중에 널넣을떄 쓸려고 안뺀듯.
	if (n == 0)
		return (dlen + ft_strlen(s));  // stc 구할려고 쓴 놈
	while (*s)
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}
