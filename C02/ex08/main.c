#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char str[15] = "Hello World!";
	char *str2;

//	printf("%s\n",str);

	str2 = ft_strlowcase(str);
//	str = ft_strlowcase(str);

	printf("%s\n",str2);
	
	return 0;
	
}
