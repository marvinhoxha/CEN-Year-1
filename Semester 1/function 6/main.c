//mhoxha20
//functions that reads objects from file and caculates the sum of their area and the smallest area object
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double P1 (int r)
{
    return 3.14159*2*r;
}
double P2 (int a,int b)
{
    return 2.0*(a+b);
}
double P3 (int b,int h)
{
    double a;
    a=(float)sqrt(((b*b)/4.0)+(h*h));

    return 2.0*a+b;
}
int main()
{
    int num,n,a,b,h,r,i;
    double sumP=0,minP=1000000000000000;
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
          fscanf(infile,"%d",&r);
          sumP+=P1(r);
          if (P1(r)<=minP)
          {
             minP=P1(r);
          }
      }
      if (n==2)
      {
          fscanf(infile,"%d%d",&a,&b);
          sumP+=P2(a,b);
          if (P2(a,b)<=minP)
          {
             minP=P2(a,b);
          }
      }
      if (n==3)
      {
          fscanf(infile,"%d%d",&b,&h);
          sumP+=P3(b,h);
          if (P3(b,h)<=minP)
          {
             minP=P3(b,h);
          }
      }
    }
    printf("%.2lf %.2lf",sumP,minP);
    fclose(infile);
    return 0;
}
