//mhoxha20
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
