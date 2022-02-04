//mhoxha20
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int i,num,grade,cntG=0,sum=0;
    char name[20],surname[20],maxname[20],maxsurname[20];
    float avrg,maxavrg=-1;
    FILE * infile;
    infile = fopen("input.txt","r");
    if (infile==NULL)
    {
         exit(1);
    }

    fscanf(infile,"%d",&num);
    for(i=1;i<=num;i++)
    {
        fscanf(infile,"%s%s",name,surname);
        cntG=0;
        sum=0;
        do
        {
        fscanf(infile,"%d",&grade);
          if(grade!=-1)
          {
           sum=sum+grade;
           cntG++;
          }
        }while(grade!= -1);
        if(cntG<=4)
            avrg=sum/4.0;
        else
            avrg=(float)sum/cntG;
        if(avrg>=maxavrg)
        {
            maxavrg=avrg;
            strcpy(maxname,name);
            strcpy(maxsurname,surname);
        }

    }
    printf("%s %s %.2f",maxname,maxsurname,maxavrg);
    fclose(infile);
     return 0;
}
