//mhoxha20
//exercise to read values from a file and caculate the area for each figure 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double S1 (int a,int b)
{
    return 3.14159*a*b;
}
double S2 (int a,int b,int h)
{
    return (a+b)/2.0*h;
}
double S3 (int a)
{
    return (3*1.732)/2*(a*a);
}
int main()
{
    int num,n,a,b,h,i,CNT;
    double sumS=0,maxS=0;
     FILE * infile;
    infile = fopen("input.txt","r");
    if (infile==NULL)
    {
         exit(1);
    }
    fscanf(infile,"%d",&num);
    for (i=1;i<=num;i++)
    {
      fscanf(infile,"%d",&n);
      if (n==1)
      {
          fscanf(infile,"%d%d",&a,&b);
          sumS+=S1(a,b);
          if (S1(a,b)>maxS)
          {
             maxS=S1(a,b);
             CNT=1;
          }
      }
      if (n==2)
      {
          fscanf(infile,"%d%d%d",&a,&b,&h);
          sumS+=S2(a,b,h);
          if (S2(a,b,h)>maxS)
          {
             maxS=S2(a,b,h);
             CNT=2;
          }
      }
      if (n==3)
      {
          fscanf(infile,"%d",&a);
          sumS+=S3(a);
          if (S3(a)>maxS)
          {
             maxS=S3(a);
             CNT=3;
          }
      }
    }
    printf("%.2lf %d",sumS,CNT);
    fclose(infile);
    return 0;
}
