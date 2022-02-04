//mhoxha20
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int i,num,j,nr;
    FILE * infile;
    infile = fopen("input.txt","r");
    if (infile==NULL)
    {
         exit(1);
    }

    fscanf(infile,"%d%d",&num,&nr);
    for(i=0;i<num;i++)
    {
        for (j=0;j<num;j++)
        {
         printf("%d ",nr);
         nr++;
        }
        printf("\n");
        nr=nr-num+1;
    }
    fclose(infile);
     return 0;
}
