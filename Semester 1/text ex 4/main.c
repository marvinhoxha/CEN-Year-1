//mhoxha20
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int i,num,j;
    char sp,ch;
    FILE * infile;
    infile = fopen("input.txt","r");
    if (infile==NULL)
    {
         exit(1);
    }

    fscanf(infile,"%d%c%c",&num,&sp,&ch);
    for(i=1;i<=num;i++)
    {
        for (j=1;j<=i;j++)
        {
         printf("%c ",ch);
        }
        printf("\n");
    }
    fclose(infile);
     return 0;
}
