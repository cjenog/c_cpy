#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char str[30] = "1234567";

	printf("str의 주소값 : %p\n",str);

	int i = ft_strlen(str);
	printf("%d\n",i);
	return 0;	
}
