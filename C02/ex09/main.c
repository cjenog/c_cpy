#include <stdio.h>
char    *ft_strcapitalize(char *str);

int main(void)
{
	char mastring[] = "rekt17+lol mdr mdr 4242l42$+a b c aABCDEF";
	printf("%s\n", mastring);
	printf("%s\n", ft_strcapitalize(mastring));
	return (0);
}
