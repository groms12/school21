#include <stdio.h>

void ft_sort_string_tab(char **tab)
{
	//получается он просто строки местами должен менять?
}

int		main(void)
{
	char *tab[3] = {"zyx", "cba", "dgefh"};
	int i;
	ft_sort_string_tab(tab);
	for (i = 0; i < 3; i++)
		printf("%s\n", tab[i]);
	return (0);
}
