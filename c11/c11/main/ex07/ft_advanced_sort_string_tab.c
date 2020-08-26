#include <stdio.h>

void ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	
}

int	ft_func(char *a, char *b)
{
	//strcmp наверно
}

int		main(void)
{
	char *tab[3] = {"zyx", "cba", "dgefh"};
	int i;
	ft_advanced_sort_string_tab(tab, &ft_func);
	for (i = 0; i < 3; i++)
		printf("%s\n", tab[i]);
	return (0);
}
