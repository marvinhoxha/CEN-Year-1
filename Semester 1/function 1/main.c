//mhoxha20
//function that gets a number n and returns a random number from 0 to n-1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int genRand (int n);
int main()
{
    int n;
    srand(time(NULL));
    scanf("%d",&n);
    printf("%d ",genRand(n));
    return 0;
}
int genRand (int n)//functions are independent so we can put a difrent name for the var inside
{

    return (rand()%n);
}
