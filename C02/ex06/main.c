#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
//	int j = 1;
	char ch1[3] = "abc";
	ch1[1] =0;
	int i;
//	scanf("%[^\n]s", ch1);
	
	i = ft_str_is_printable(ch1);

	printf("%s에 출력불가능한 문자포함되있나요?(있으면 0 아니면 1) : %d \n", ch1, i);
       return 0;	
}
