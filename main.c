#include <stdio.h>
#include <stdlib.h>
#include "new_git.h"

int main()
{

  int x,y;
  x=54;
  y=34;
  printf("sum of %d & %d = %d\n",x,y,sum_variables(x,y));
  printf("sub of %d & %d = %d\n",x,y,subtraction_var(x,y));


    return 0;
}
