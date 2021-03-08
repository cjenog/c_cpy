/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjenog <cjenog@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 19:05:43 by cjenog            #+#    #+#             */
/*   Updated: 2021/02/28 19:44:42 by cjenog           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{	
	int i;

	i = 0;
	while (str[i] != 0)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
				i++;
			}
			else
			{
				i++;
			}
			while(str[i] != 0)
			{
				if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'Z'))
				{
					if(str[i] >= 'A' && str[i] <= 'Z')
					{
						str[i] += 32;
						i++;
					}
					else
					{
						i++;
					}
				}
				else
				{
					i++;
					break;
				}
			}
		}
		else
		{
			i++;
		}	


	}
	return (str);
}
