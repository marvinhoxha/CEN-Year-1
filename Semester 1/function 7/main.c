//mhoxha20
//function that writes the user input in file then reads the values and caculates the sum of areas and the min area
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double area (int a,int b,int angle)
{
    double val;
    val=3.14159265/180;
    return ( a * b * (sin(angle*val)/2.0));
}
int main()
{
    int num,a,b,angle,i;
    double minS=100000000000,sumS=0;
     FILE * infile1;
    infile1 = fopen("input.txt","r");
    if (infile1==NULL)
    {
         exit(1);
    }
     FILE * infile2;
    infile2 = fopen("brrinj.txt","w");
    fscanf(infile1,"%d",&num);
    for(i=1;i<=num;i++)
    {
        fscanf(infile1,"%d%d",&a,&b);
        fprintf(infile2,"%d %d\n",a,b);
    }
    fclose(infile2);
     infile2 = fopen("brrinj.txt","r");
    if (infile2==NULL)
    {
         exit(1);
    }
    for(i=1;i<=num;i++)
    {
        fscanf(infile1,"%d",&angle);
        fscanf(infile2,"%d%d",&a,&b);
        sumS+=area(a,b,angle);
        if (area(a,b,angle)<=minS)
        {
            minS=area(a,b,angle);
        }
    }
    printf("%.2lf %.2lf",sumS,minS);
     fclose(infile1);
    return 0;
}
