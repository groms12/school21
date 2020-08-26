#include <stdio.h>

int ft_count_if(char **tab, int length, int(*f)(char*))
{
	//return 1;
}

int	ft_null_test(char *c)
{
	int i;
	
	i = 0;
	while (*(c + i) != '\0')
	{	
		if (*(c + i) == 'a')
			return (0);
		i++;
	}
	return (7); // значаение типа "что-то не нулевое"
}

int		main(void)
{
	char *a = "abc";
	char *b = "defgh";
	char *c = "xy";
	char *tab[3] = {"abc", "defgh", "xy"};
	int n = 2;
	// хз как норм этот массив указать, так рабоатет
	//printf("%s ", tab[1]);
	printf("%d", ft_count_if(tab, n, &ft_null_test));
	return (0);
}
