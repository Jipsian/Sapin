#include <unistd.h> 
#include <stdlib.h>

void my_putchar(char c)
{
  write(1, &c, 1);
}

void put_space(int n)
{
  int i = 0;
  while (i < n)
  {
   my_putchar(' ');
   i++;
  }
}

void put_star(int n)
{
  int i = 0;
  while (i < n)
  {
    my_putchar('*');
    i++;
  }
}

void new_line(int n)
{
  int i = 0;
  while (i < n)
  {
    my_putchar('\n');
    i++;
  }
}

void sapin_level1()
{
  int space = 3;
  int star = 1;
  int count = 4;
  
  while (count != 0)
  {
    put_space(space);
    put_star(star);
    new_line(1);
    count--;
    space--;
    star = star + 2;
  }
}

void sapin(int size)
{
  if (size == 1)
    sapin_level1();
  else
    my_putchar('1');
}

int main(int argc, char **argv)
{
  int nb;
  
  sapin(1);
  
  nb = atoi(argv[1]);

  if (nb <= 0)
    return (1);
  if (argc != 2)
  return (1);
  
  return (0);
}
