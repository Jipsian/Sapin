#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> 

void my_putchar(char c)
{
  write(1, &c, 1);
}

int get_base(int size)
{
  int base = 7;
  int lines = 4;
  int stair = 2;
  int i = 1;

  while (i < size)
    {
      if (stair % 2 == 0)
	base = base + lines + 2;
      if (stair % 2 != 0)
	base = base + lines + 3;
      i++;
      lines++;
      stair++;
    }
  return base;
}

void trunk(int size)
{
  int i, j, base, space;

  j = 0;
  base = get_base(size);
  space = (base - size) / 2;

  while (j < size)
    {
      	if(size % 2 == 0)
	{
	  for (i = 0; i < space; i++)
	      my_putchar(' ');
	  for (i = 0; i < size + 1; i++)
	      my_putchar('|');
	}
	if(size % 2 != 0)
	{
	  for (i = 0; i < space; i++)
	      my_putchar(' ');
	  for (i = 0; i < size; i++)
	      my_putchar('|');
	}
    j++;
    my_putchar('\n');
    }
}
 
void	sapin(int size)
{
  int space, stars, stair, lines, i;

  stars = 1;
  stair = 2;
  lines = 4;

  space = get_base(size) / 2;

  while (lines > 0)
    {
      for (i = 0; i < space ; i++)
	  my_putchar(' ');
      for (i = 0; i < stars ; i++)
	  my_putchar('*');
      my_putchar('\n');
      space--;
      lines--;
      stars = stars + 2;
    }
   space++;
    
   while (stair <= size)
    {
	lines = stair + 3;
	stars = stars - 2 - 2*(stair/2);
	space = space + (stair/2);
	while (lines > 0)
	  {
	    for (i = 0 ; i < space ; i++)
		my_putchar(' ');
	    for(i = 0 ; i < stars ; i++)
		my_putchar('*');
	    my_putchar('\n');
	    space--;
	    lines--;
	    stars = stars + 2;
	  }
        stair++;
	space++;
     }

   trunk(size);    
}

int main(int argc, char **argv)
{
  int nb;

  if (argc != 2)
    return (1);
  
  nb = atoi(argv[1]);

  if (nb <= 0 || nb >= 43)
    return (1);

  sapin(nb);
  return (0);
}
