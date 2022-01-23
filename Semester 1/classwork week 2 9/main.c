//mhoxha20
#include <stdio.h>
#include <stdlib.h>

int main()
{   int g1,g2,g3;
    float x;
    scanf("%d%d%d",&g1,&g2,&g3);
    x=(g1*0.45)+(g2*0.35)+(g3*0.2);
    if (x<59.5)
    {
        printf("Failed");
    }
    else
    {
        printf("Passed");
    }
    return 0;
}
