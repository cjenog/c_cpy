#include <stdio.h>

int	ft_atoi(char *str);

int main(void)
{
	printf("%d\n", ft_atoi(" \n\t \r1234567"));
	return (0);
}
