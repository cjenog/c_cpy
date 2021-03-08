#include <stdio.h>
#include <string.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n);
int main(void)
{
	char str1[100] ={0, };
	char str2[100] ={0, };
	unsigned int n;

	scanf("%s %s %d",str1, str2, &n);

	printf("%s,%s\n",str1,str2);

	printf("%d\n", ft_strncmp(str1, str2, n));
	printf("%d\n", strncmp(str1, str2, n));
	return (0);
}
