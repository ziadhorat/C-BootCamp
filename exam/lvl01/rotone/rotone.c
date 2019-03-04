#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rot(char c)
{
	if (c == 'Z' || c == 'z')
		ft_putchar(c - 25);
	if (c >= 'A' && c < 'Z')
		ft_putchar(c + 1);
	if (c >= 'a' && c < 'z')
		ft_putchar(c + 1);
}

int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			rot(av[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
