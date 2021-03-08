#include <stdio.h>

int	main(void)
{
	int i =-100;
	unsigned int ui = 0;

	ui = i;
	printf("%u",ui);

	if(ui < 0)
	{
		printf("hi\n");
	}
//	{
//		printf("hi\n");
//	}

	return 0;
}
