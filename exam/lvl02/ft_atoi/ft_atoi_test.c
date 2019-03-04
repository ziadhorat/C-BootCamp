#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str);
void putnbr(int n);
void ft_putchar(char c);

int main(void)
{
  int num;
  num = 0;
  num = atoi("+90123 qwe");
  printf("%d", num);
  return 0;
}

void putnbr(int n)
{
  if (n >= 10)
  {
    putnbr(n / 10);
    putnbr(n % 10);
  }
  else
    putchar(48 + n);
}

int ft_atoi(char *str)
{
  int neg;
  int i;
  int num;

  i = 0;
  neg = 1;
  num = 0;
  while (str[i] <= ' ')
    i++;
  if (str[i] == '-' || str[i] == '+')
  {
    if (str[i] == '-')
      neg *= -1;
    i++;
  }
  while (str[i] >= '0' && str[i] <= '9')
  {
    num = num * 10 + (str[i] - 48);
    i++;
  }
  return (num * neg);
}