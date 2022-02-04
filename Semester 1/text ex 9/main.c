//mhoxha20
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int i,j,nr;
    FILE * infile;
    infile = fopen("input.txt","r");
    if (infile==NULL)
    {
         exit(1);
    }

    fscanf(infile,"%d",&nr);
    for (i=1;i<=nr;i++)
    {
        for (j=1;j<=nr;j++)
        {
            if (i==1 || j==1 || i==nr || j==nr || i==j || i + j==nr + 1)
                printf("*");
            else
                printf(" ");
        }
      printf("\n");
    }
    fclose(infile);
     return 0;
}

