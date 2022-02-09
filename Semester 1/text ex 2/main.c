//mhoxha20
//text exercise
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int mass,quant,nrofatoms,totW=0,w,i;
    char com;
    FILE * infile;
    infile = fopen("input.txt","r");
    if (infile==NULL)
    {
         exit(1);
    }

    fscanf(infile,"%d",&nrofatoms);
    for(i=0;i<nrofatoms;i++)
    {
        fscanf(infile,"%d%d",&mass,&quant);
        w=mass*quant;
        totW=totW+w;
    }
    printf("%d",totW);
    fclose(infile);
     return 0;
}
