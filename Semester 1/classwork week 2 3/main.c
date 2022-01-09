#include <stdio.h>
#include <stdlib.h>

int main()
{ int n;
  int a1,a2,a3,a4;
  int x;
  scanf("%d",&n);
  a4=n%10;
  n=n/10;
  a3=n%10;
  n=n/10;
  a2=n%10;
  n=n/10;
  a1=n%10;
  x=a1+a2+a3+a4;

    printf("The number in digits is: %d %d %d %d \nThe sum of digits is: %d",a1,a2,a3,a4,x);
    return 0;
}
