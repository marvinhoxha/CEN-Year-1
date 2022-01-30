//mhoxha20
/*exercise that reads from the input.txt file n->nr of numbers k->the number to use in the rand() function and 
then makes a loop n times and adds random numbers from 0 to k-1 to the numrand summ */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
/*rand ()%k 0--->k-1*/
int GetrandAdd (int k)
{
    return rand()%k;
}
int main()
{
    int i,k,n,numrand=0;
    FILE * infile;
    infile = fopen("input.txt","r");
    if (infile==NULL)
    {
         exit(1);
    }
    srand(time(NULL));
    fscanf(infile,"%d%d",&n,&k);
    for (i=0;i<n;i++)
    {
        numrand=numrand +GetrandAdd(k);
        printf("%d ",numrand);
    }
    fclose(infile);
    return 0;
}
