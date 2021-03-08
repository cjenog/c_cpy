#include <stdio.h>

void	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char *src = "Hello world!";
	char dest[30];

//	char *ch = ft_strcpy(dest,src);
	ft_strcpy(dest,src);
//	printf("%s\n",ch);
	printf("%s\n",dest);
	return 0;
	
}
