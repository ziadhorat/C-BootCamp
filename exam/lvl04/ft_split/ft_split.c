#include <stdio.h> //DELETE THIS
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int count_words(char *str)
{
	int		i;
	int		count;
	int		word;

	i = 0;
	count = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 33 && str[i] <= 126 && word == 0)
		{
			word = 1;
			count++;
		}
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			word = 0;
		i++;
	}
	return (count);
}



char **ft_split(char *str)
{
  char **arr;
  int i = 0;
  int j = 0;
  int k = 0;

  alloc(str, arr);
  while (str[i] != '\0')
  {
    j++;
    i++;
  }
  return (arr);
}




int main(int ac, char **av)
{
  if (ac == 2)
  {
  	  printf("%s",ft_split(av[1])[0]);
  }
  return 0;
}
