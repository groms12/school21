#include <stdio.h>

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
	}
	return (1);
}

int	ft_null_test(int a, int b)
{
	if (a < b)
		return (a - b);
	if (a == b)
		return (0);
	return (a - b);	
}

int		main(void)
{
	int *tab = {1, 2, 3};
	int n = 3;
	printf("%d", ft_is_sort(tab, n, &ft_null_test));
	return (0);
}
