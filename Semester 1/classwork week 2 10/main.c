#include <stdio.h>
#include <stdlib.h>

int main()
{   int age,price=0,i=1,x;
    while (i<4)
    {
        scanf("%d",&age);
        if (age<4)
        {
            x=0;
        }
        else if (age<10)
        {
            x=5;
        }
        else
        {
            x=8;
        }
        price=price+x;
        i++;
    }

    printf("%d",price);
    return 0;
}
