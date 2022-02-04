//mhoxha20
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int max,nr,nrofnumbers,i;
    char com;
    FILE * infile;
    infile = fopen("input.txt","r");
    if (infile==NULL)
    {
         exit(1);
    }

    fscanf(infile,"%d",&nrofnumbers);
    fscanf(infile,"%d",&max);
    for(i=1;i<nrofnumbers;i++)
    {
        fscanf(infile,"%c%d",&com,&nr);//we don't need & when scaning string
        if(nr>max)
        {
            max=nr;
        }
    }
    printf("%d",max);
    fclose(infile);
     return 0;
}
