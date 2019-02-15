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
   my_putchar('0');
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

int nb_lignes(int size)
{
  int start = 4;
  if (size > 1)
    start = start + size;
  return start;
}


int stars_base(int size)
{
  int start = 7;
  int residu = 6;
  int count = 1;
  
  start = start + 8;
}

void sapin_level1(size)
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

void sapin_leveln(int start)
{
  int space, star, stair;
  space = 0;
  stair = start + 3;
  star = (stair * start) - 1; 
  while (start != 1)
    {
      put_space(space);
      put_star(star);
      new_line(1);
      star = star - 2;
      space++;
      start--;
      sapin_leveln(start);
    }
}

void sapin(int size)
{
  if (size == 1)
    sapin_level1();
  else
    {
      sapin_level1();
      sapin_leveln(size);
    }
}

int main(int argc, char **argv)
{
  int nb;
  
  sapin(3);
  
  nb = atoi(argv[1]);

  if (nb <= 0)
    return (1);
  if (argc != 2)
  return (1);
  
  return (0);
}
