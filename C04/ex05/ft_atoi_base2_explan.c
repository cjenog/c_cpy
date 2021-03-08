/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base2_explan.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjenog <cjenog@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 20:37:15 by cjenog            #+#    #+#             */
/*   Updated: 2021/03/04 22:58:09 by cjenog           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_exception(char *str)
{
	int i;
	int j;

	while (str[0] == 0 || str[1] == 0)
		return (1);
	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == '+' || str[i] == '-' || str[i] <= 32 || str[i] == 127)
			return (1);
		j = i + 1;
		while (str[j] != 0)
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_numeral(char *str, char *base, int i)  // numeral(기수) 베이스에입력된값으로 str배열을 기수화시킴
{
	int c_to_o;
	int out;
	int j;

	c_to_o = 0;
	out = 0; 				// str[i]의 반복값을 명확히 하기 힘들어, out이라는놈을 사용함. if문에  들어가면 0을 줬음
	while (str[i] != 0)
	{
		if (out)
			break ;
		j = 0;
		while (base[j] != 0)
		{
			out = 1;		// 첫번째 와일문에서 out조건문 아래에 선언하면 밑에 이프문 브레이크없어도됨.
			if (str[i] == base[j])
			{
				c_to_o = (c_to_o * 10) + j;
				out = 0;
				break ;			// out에 0을 주고 break안하면 while이 반복되면서 out이 다시 1이되버림. 첫와일문에 선언하면 갠찬을듯 브레이크안해도될듯
			}
			j++;
		}
		i++;
	}
	return (c_to_o);
}

int	ft_len(char *ptr)
{
	int i;

	i = 0;
	while (ptr[i] != 0)
		i++;
	return (i);
}

int	ft_octa_to_decimal(int c_to_o, int len)	// 8진수로저장된 정수값을 10진수로 바꾸는 함수 근데 변수명을 o로쓰면안되는게 8진수말고 다른진법도써야함
{
	int o_to_d;
	int weight;			// 지수를 표현하기위해 썼음

	o_to_d = 0;			//합을 넣을것이기에 0 아래는 지수의 0승은 1이기에 1을줌.
	weight = 1;
	while (c_to_o > 0)	// 8진수값이 0이될때까지반복
	{
		o_to_d = o_to_d + ((c_to_o % 10) * weight); // 나머지 * 지수  + 합할곳 한것임
		c_to_o /= 10;
		weight = weight * len; // 지수를 1승씩 올리는것
	}
	return (o_to_d);
}

int	ft_atoi_base(char *str, char *base)
{
	int i;
	int sign;
	int len;
	int c_to_o;
	int o_to_d;

	if (ft_exception(base)) 	//예외상황이면 바로 리턴 0
		return (0);
	sign = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	c_to_o = ft_numeral(str, base, i);
	len = ft_len(base);
	o_to_d = ft_octa_to_decimal(c_to_o, len);
	return (o_to_d * sign);
}
