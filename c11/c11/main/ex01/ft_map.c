#include <stdio.h>

int *ft_map(int *tab, int length, int(*f)(int))
{
	
}

int	ft_test_func(int n)
{
	return (n += 10);
}

int		main(void)
{
	int tab[] = {1, 2, 3, 4, 5, 6, 7};
	int n = 5;
	int *c;
	int i;
	
	c = ft_map(tab, n, &ft_test_func);
	for(i = 0; i < 7; i++)
		printf("%d ", c[i]);
	printf("\n");
	return (0);
}
