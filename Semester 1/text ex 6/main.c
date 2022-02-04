//mhoxha20
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int i,num,grade,sum=0,maxgrade=0;
    float avrg;
    FILE * infile;
    infile = fopen("input.txt","r");
    if (infile==NULL)
    {
         exit(1);
    }

    fscanf(infile,"%d",&num);
    for(i=1;i<=num;i++)
    {
        maxgrade=0;
        do
        {
        fscanf(infile,"%d",&grade);
          if(grade!=-1&&grade>maxgrade)
          {
           maxgrade=grade;
          }
        }while(grade!= -1);
        sum=sum+maxgrade;
        avrg=(float)sum/num;

    }
    printf("%.2f",avrg);
    fclose(infile);
     return 0;
}

