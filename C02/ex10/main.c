#include <stdio.h>
//#include <string.h>
//#include </usr/include/bsd/string.h>
#include <bsd/string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
	char dest[15] = {0, };
	char orig[] = "hello world!";
	int i = 0;
	scanf("%d",&i);
	printf("%u\n", ft_strlcpy(dest, orig, i));
	printf("%s\n", dest);
	printf("%lu\n", strlcpy(dest, orig, i));
	printf("%s\n", dest);
	return (0);
}
