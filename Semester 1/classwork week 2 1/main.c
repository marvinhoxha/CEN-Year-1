#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,sum;
   printf("Enter first num: ");
   scanf("%d",&a);
   printf("enter second num: ");
   scanf("%d",&b);
   if (a>b)
   {
      sum=a+b;
   }
   else
   {
      sum=a-b;
   }



    printf("sum of two num is: %d",sum);
    return 0;
}
