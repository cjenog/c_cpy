void	ft_putstr_non_printable(char *str);
#include <stdio.h>
int		main(void)
{
	ft_putstr_non_printable("Bonjour\rAu revoir.\n\f\t\n\?");

//	printf("\");


	return (0);
}
