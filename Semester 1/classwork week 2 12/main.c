//mhoxha20
#include <stdio.h>
#include <stdlib.h>

int main()
{   float n,x;
    int x1;

    scanf("%f",&n);
    if (n<501)
    {
        x1=10;
        printf("%d",x1);
    }
    else if (n<1000)
    {
        x=10+(n*0.02);
        printf("%.2f",x);
    }
     else if (n<=3000)
    {
        x=10+(n*0.01);
        printf("%.2f",x);
    }
     else
     {
        x1=40;
        printf("%d",x1);
     }
    return 0;
}
