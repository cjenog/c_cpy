/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjenog <cjenog@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 10:32:50 by cjenog            #+#    #+#             */
/*   Updated: 2021/03/03 20:12:55 by cjenog           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != 0)
	{
		i++;
	}
//	while (j < (nb-1))
	while (j < nb && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;  // 만약에 칸이 ch1[10]="hello"; ch2[10]="world";  helloworld처럼 10칸 꽉차서 널값을 못넣어도 helloworld는 출력되는데 웃긴게
		      // 그다음 주소에 널을 넣어줘야함. 이거는 실제 strncat도 그런식으로 동작함. 근데 그다음주소는 ch1이 아닌 다른 주소값임.
		     // 그래서 비주얼스튜디오에서는런타임  에러 발생함. 무조건 칸넉넉하게 만들어야하고 마지막에 널값도 무조건 넣어줘야함.
	return (dest);

}
