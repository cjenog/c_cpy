#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);
int main()
{
	int i = 5;
	char string[] = "Lol le string\0 mange des chips de crevette";
//	char string[10] = "hello";
	char string2[] = "est rouge";
//	char string2[] = "world";
	printf("%s\n", ft_strncat(string, string2, i));
	char string0[] = "Lol le string\0 mange des chips de crevette";
//	char string0[10] = "hello";
	printf("%s\n", strncat(string0, string2, i));
	return (0);
}
