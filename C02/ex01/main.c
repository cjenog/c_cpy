#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char *src ="hello\n jcs!\n";
	char dest[30];
	unsigned int n = 5;

	char *ch1 = ft_strncpy(dest,src,n);

	printf("%s",ch1);
	printf("%s",dest);

	return 0;

}
