//mhoxha20
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int i,nr,sum=0,number,digitmax;
    FILE * infile;
    infile = fopen("input.txt","r");
    if (infile==NULL)
    {
         exit(1);
    }

    fscanf(infile,"%d",&nr);
    for(i=0;i<nr;i++)
    {
        digitmax=0;
        fscanf(infile,"%d",&number);
        if (number<0)  {number=number*-1;}
        while (number)
        {
            if (digitmax < number % 10)
                {
                    digitmax = number % 10;
                }

            number = number / 10;

        }

        sum=sum+digitmax;

    }
    printf("%d",sum);
    fclose(infile);
     return 0;
}
