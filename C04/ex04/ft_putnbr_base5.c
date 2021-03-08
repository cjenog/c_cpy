/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base5.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjenog <cjenog@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:11:54 by cjenog            #+#    #+#             */
/*   Updated: 2021/03/04 18:54:20 by cjenog           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_len(char *ptr)
{
	int i;

	i = 0;
	while (ptr[i])
		i++;
	return (i);
}

int		ft_exception(char *ptr)
{
	int i;
	int j;

	i = 0;
	if (ptr[0] == 0 || ptr[1] == 0)
		return (1);
	while (ptr[i])
	{
		if (ptr[i] == '-' || ptr[i] == '+' || ptr[i] <= 31 || ptr[i] == 127)
			return (1);
		j = i + 1;  		
		while (ptr[j])
		{
			if (ptr[i] == ptr[j])  	//주소값을 넣고 돌리면 코드가 더 간단해짐. str1의주소값을 증가시키면서 j는 거기에 +1씩 계속더하기만하면됨
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		lnbr;
	int		len1;
	char	str[32];  	// 32로준이유는 인트는 4바이트고 2진수는 32칸을 사용하기때문임.

	len1 = ft_len(base); 
	if (ft_exception(base))	// 익셉션의 리턴값이 1이면 바로 함수 종료
		return ;
	i = 0;
	lnbr = nbr;
	if (lnbr < 0)
	{
		ft_putchar('-');
		lnbr = -lnbr;
	}
	while (lnbr != 0)
	{
		str[i++] = lnbr % len1;	// 문자열숫자를 정수로 출력하는것이나 다른 기타등등과 앞전에 했던것과  다를바 없음.  그때는 10으로 나눈거고
					// 지금은 10을 포함한 어떤수로든 나누는것임. 형태도 동일하고 결과도 동일함. 
					// 그렇게 str문자열에 거꾸로 값을 집어넣는것임.
		lnbr = lnbr / len1;
	}
	while (--i >= 0)		// 거꾸로 넣은 값을 제대로 출력하는과정임. 그중에 base에 적힌 문자로 기수를 표현할것이니, 
					// str[i]에는 그냥 숫자가들어있고(아스키코드 숫자아님!) 그 숫자값을 사용하여 베이스의 각요소에 접근하는것임
		ft_putchar(base[(int)str[i]]);
}
