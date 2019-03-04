#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		main(int ac, char **av)
{
	int i;

	if (ac == 2)
	{
		i = ft_strlen(av[1]);
		while (--i >= 0)
			ft_putchar(av[1][i]);
	}
	ft_putchar('\n');
	return (0);
}
