#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int main(void)
{
	printf("%d\n", ft_atoi_base(" --+-+123456789??", "0123456789"));
	return (0);
}
