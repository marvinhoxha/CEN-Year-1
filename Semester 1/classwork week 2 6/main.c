/*Exercise to caculate water bill if there are less then 4000 litters bill equals 10 else we use formula*/
#include <stdio.h>
#include <stdlib.h>

int main()
{ float litters,x;
  int x1;
  scanf("%f",&litters);

  if (litters<=4000)
  {
      x1=10;
      printf("%d",x1);
  }
  else
  {
      x=10+(litters-4000)*0.005;
      printf("%.2f",x);
  }

    return 0;
}
