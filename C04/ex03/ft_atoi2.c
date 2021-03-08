/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjenog <cjenog@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:30:29 by cjenog            #+#    #+#             */
/*   Updated: 2021/03/04 14:41:47 by cjenog           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int c_to_i;
	int sign;

	i = 0;
	c_to_i = 0;
	sign = 1;

	while (str[i] == 32 || (str[i] >=9 && str[i] <=13))  //화이트스페이스 날리기
		i++;
	while (str[i] == '-' || str[i] == '+')  // 화이트스페이스는 맨처음만 가능이고 부호는 그다음에만 가능이라 화이트는 위에 처리하고 여기서 부호  처리함
	{	
		if (str[i] == '-')
			sign *= -1;   //-가 홀수개인지 짝수개인지에 따라 부호변수값을 바꿈
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		c_to_i = (c_to_i * 10) + (str[i] - '0');  //앞에꺼 다처리하고나서 정수형변수에 문자열숫자를 넣어줌.
		i++;
	}
	return (c_to_i * sign);  // 부호와 정수를 곱한뒤 리턴
}
