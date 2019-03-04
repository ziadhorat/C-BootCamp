#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		b_curly(char *str)
{
	int i = 0;
	int c = 0;
	while (str[i])
	{
		if (str[i] == '{')
			c++;
		if (str[i] == '}')
			c--;
		i++;
	}
	return (c);
}

int		b_square(char *str)
{
	int i = 0;
	int s = 0;
	while (str[i])
	{
		if (str[i] == '[')
			s++;
		if (str[i] == ']')
			s--;
		i++;
	}
	return (s);
}

int		b_round(char *str)
{
	int i = 0;
	int r = 0;
	while (str[i])
	{
		if (str[i] == '(')
			r++;
		if (str[i] == ')')
			r--;
		i++;
	}
	return (r);
}

int		main(int ac, char **av)
{
	int i = 1;
	int c;
	int r;
	int s;
	if (ac < 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (i < ac)
	{
		c = b_curly(av[i]);
		r = b_round(av[i]);
		s = b_square(av[i]);
		if (c == 0 && r == 0 && s == 0)
			ft_putstr("OK\n");
		else
			ft_putstr("Error\n");
		i++;
	}
	return (0);
}
