#include <unistd.h>
#include <stdio.h>
int ft_putchar(char c);
int ft_putnbr(int n);
char *ft_strrev(char *str);

int main(void)
{
  char text[] = "Salut";

  printf("%s", ft_strrev(text));

  return (0);
}

int ft_putchar(char c)
{
  write(1, &c, 1);
  return 0;
}

int ft_putnbr(int n)
{
  if (n >= 10)
  {
    ft_putnbr(n / 10);
    ft_putnbr(n % 10);
  }
  else
  {
    ft_putchar(48 + n);
  }
  return 0;
}

char *ft_strrev(char *str)
{
  int count;
  int len;
  int ascii;

  len = 0;
  while (str[len] != '\0')
  {
    len++;
  }
  count = 0;
  while (count < len / 2)
  {
    ascii = str[count];
    str[count] = str[len - count - 1];
    str[len - count - 1] = ascii;
    count++;
  }
  return (str);
}