#include <stdio.h>

int ft_any(char **tab, int(*f)(char*))
{
	
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
	return (7); // ��������� ���� "���-�� �� �������"
}

int		main(void)
{
	char *a = "abc";
	char *b = "defgh";
	char *c = "xy";
	char *tab[3] = {"abc", "defgh", "xy"};
	// �� ��� ���� ���� ������ �������, ��� ��������
	//printf("%s ", tab[1]);
	printf("%d", ft_any(tab, &ft_null_test));
	return (0);
}
