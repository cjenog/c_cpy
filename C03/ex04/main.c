#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);
int main()
{
	char string[48] = "Poulet aua curry";
	char string2[] = "p";
	printf("%s\n", ft_strstr(string, string2));
	printf("%s\n", strstr(string, string2));
	return (0);
}
