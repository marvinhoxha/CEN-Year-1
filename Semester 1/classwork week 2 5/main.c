/*The average of 3 grades */
#include <stdio.h>
#include <stdlib.h>

int main()
{ int n1,n2,n3;
  float x;
    scanf("%d%d%d",&n1,&n2,&n3);
    x=(n1+n2+n3)/3.0;
    if(x>=59.5)
        {
    printf("Passed");
        }
    else
    {
      printf("Failed");
    }

    return 0;
}
