#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

int	main(void)
{
	char *ch1 = "helloworld     ";
	char ch2[20] ="hello!";


	printf("ch1 : %d, ch2 : %d \n", ft_strlen(ch1), ft_strlen(ch2));
	printf("ch1 : %d, ch2 : %ld \n", (int)strlen(ch1), strlen(ch2));
	return 0;
	
}
