#include <stdlib.h>
#include <stdio.h>

int	ft_findhcd(int n1, int n2)
{
	int smaller;
	
	if (n1 <= 0 || n2 <= 0)
		return (0);
	if (n1 < n2)
		smaller = n1;
	else
		smaller = n2;
	while (smaller > 0)
	{
		if (n1 % smaller == 0 && n2 % smaller == 0)
			return(smaller);
		else
			smaller--;
	}
	return (1);
}

int main(int argc, char **argv)
{
	int s1;
	int s2;
	if (argc != 3)
		printf("%c",'\n');
	else
	{	
		s1 = atoi(argv[1]);
		s2 = atoi(argv[2]);
		if (s1 <= 0 || s2 <= 0)
        	{
				printf("\n");
				return (0);
			}
		printf("%d\n",ft_findhcd(s1, s2));
	}
	return (0);
}
