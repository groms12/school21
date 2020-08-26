#include <unistd.h>

int	ft_atoi(char *str)
{
	int num;
	int m;

	m = 0;
	num = 0;
	while (*str == '+' || *str == '-')
	{
		if (*str = '-')
			m++;
		str++;
	}
	if (m % 2 == 0)
		m = 1;
	else
		m = -1;
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (num * m);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	is_minus(int nb)
{
	char	minus;
	int		num;

	minus = '-';
	num = nb;
	if (nb < 0)
	{
		write(1, &minus, 1);
		num = -nb;
	}
	return (num);
}

void	ft_putnbr(int nb)
{
	char	a[12];
	char	c[11];
	int		i;
	int		k;

	i = 1;
	k = 1;
	nb = is_minus(nb);
	while (nb / 10 > 0)
	{
		a[i] = nb % 10 + '0';
		i++;
		nb = nb / 10;
	}
	while (i > 0)
	{
		c[k] = a[i];
		i--;
		k++;
	}
	c[0] = nb + '0';
	write(1, c, k);
}

int	make(char *s1, char *sep, char *s2)
{
	int num1;
	int num2;
	int rez;

	num1 = ft_atoi(s1);
	num2 = ft_atoi(s2);
	if (*sep == '+')
		rez = num1 + num2;
	if (*sep == '-')
		rez = num1 - num2;
	if (*sep == '/')
	{
		if (num2 != 0)
			rez = num1 / num2;
		else
			ft_putstr("Stop : division by zero\n");
	}
	if (*sep == '%')
	{
		if (num2 != 0)

			rez = num1 % num2;
		else
			ft_putstr("Stop : modulo by zero\n");
	}
	if (*sep == '*')
		rez = num1 * num2;
	return (rez);
}

int		main(int n, char *arg[])
{
	int rez;

	if (n == 1)
		return (0);
	else
	{
		rez = make(arg[1], arg[2], arg[3]);
		ft_putnbr(rez);
	}	
}
