#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char ch1[30] = {0, };

	scanf("%[^\n]s", ch1);

	int i = ft_str_is_lowercase(ch1);

	printf("%d\n",i);
	return 0;
}
