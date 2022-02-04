//mhoxha20
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int i,num,j;
    FILE * infile;
    infile = fopen("input.txt","r");
    if (infile==NULL)
    {
         exit(1);
    }

    fscanf(infile,"%d",&num);
    for(i=0;i<num;i++)
    {
        for (j=0;j<num;j++)
        {
         printf("* ");
        }
        printf("\n");
    }
    fclose(infile);
     return 0;
}
