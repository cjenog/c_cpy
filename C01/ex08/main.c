#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size);
int main()
{
	int tab[8] = {1, 3, 2, 5, 78, 12, 66, 4};
//	int tab[5] = {10, 5, 4, 3, 2};
	int count = sizeof(tab) / sizeof(int);

	ft_sort_int_tab(&tab[0], count);
	for (int i = 0; i < count; i++)
	{
		printf("%d ",tab[i]);
	}
} 
