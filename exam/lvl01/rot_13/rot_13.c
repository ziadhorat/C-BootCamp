#include <unistd.h>

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

char rot(char c)
{
    if ((c >= 'A' && c <= 'M') || (c >= 'a' && c <= 'm'))
	    c = c + 13;
    else if ((c >= 'N' && c <= 'Z') || (c >= 'n' && c <= 'z'))
    	c = c - 13;
    return (c);
}

int	main(int ac, char **av)
{
    int i;

    if (ac == 2)
    {
	i = 0;
	while (av[1][i] != '\0')
	{
	    ft_putchar(rot(av[1][i]));
	    i++;
	}
    }
    ft_putchar('\n');
    return (0);
}
