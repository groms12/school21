#include <stdio.h>

int ft_strlen(char **str)
{
	int	i;
	
	i = 0;
	while (str[i] != NULL)
		i++;
	return (i);
}

int ft_strcmp(char *s1, char *s2)
{
	int i;
	int k;
	
	i = 0;
	k = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	k = s1[i] - s2[i];
	return(k);
}

void ft_sort_string_tab(char **tab)
{
	int i;
	char *buf;
	int size;

	i = 0;
	size = 0;
	while (*tab != NULL)
	{
		size++;
		tab++;
	}
	//printf("%d\n", size);
	while (i < size)
	{
		while (i < (size - 1))
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				buf = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = buf;
			}
			i++;
		}
		i = 0;
		size--;
	}
}

int		main(void)
{
	char *tab[] = {"a", "b", "c"};
	int i;
	
	ft_sort_string_tab(tab);
	for (i = 0; i < 4; i++)
		printf("%s\n", tab[i]);
	return (0);
}
