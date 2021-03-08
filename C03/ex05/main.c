#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int	main()
{
	int i = 29;
	char string[] = "Lol le string\0 mange des chips de crevette";
//	char string[20] = "hello";
	char string2[] = " est rouge fluo";
//	char string2[] ="worldllllllll";
	printf("%d\n",ft_strlcat(string, string2, i));
	printf("%s\n", string);
	char string0[] = "Lol le string\0 mange des chips de crevette";
//	char string0[20] ="hello";
	printf("%lu\n",strlcat(string0, string2, i));
	printf("%s\n", string0);
	return (0);
}
