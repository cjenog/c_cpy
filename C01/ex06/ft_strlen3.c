#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;
//	char *str2 = str;

	i = 0;
	while(*str != 0)
	{
		str++;
		i++;
//		printf("%d\n",i);
	}
	return (i);
}
