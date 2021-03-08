#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char c[30] = "";
	
	printf("%s\n",c);

	scanf("%[^\n]s",c);

//	printf("%s\n",c);

//	printf("%s\n",c);	
	int i = ft_str_is_numeric(c);
	
	printf("%d\n",i);
	return 0;
}
