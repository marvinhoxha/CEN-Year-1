#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int a,b,power;
   printf("enter two numbers: ");
   scanf("%d%d",&a,&b);
   power=pow(a,b);
   printf("%d",power);
    return 0;
}
