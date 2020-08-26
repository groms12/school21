#include <stdio.h>

void ft_foreach(int *tab, int length, void(*f)(int))
{
	
}

void	ft_test_func(int n)
{
	printf("%d ", n);
}

int		main(void)
{
	int tab[] = {1, 2, 3, 4, 5, 6, 7};
	int n = 5;
	ft_foreach(tab, n, &ft_test_func);
	return (0);
}
