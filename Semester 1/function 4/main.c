//mhoxha20
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int LowerCase (int Ch)
{
    if (Ch >= 'a' && Ch <= 'z')
        return 1;
        return 0;
}
int upperCase (int Ch)
{
    if (Ch >= 'A' && Ch <= 'Z')
        return 1;
        return 0;
}
int number (int Ch)
{
   if (Ch >= '0' && Ch <= '9')
        return 1;
        return 0;
}
int special (int Ch)
{
    if (Ch >= '!' && Ch <= '.')
        return 1;
        return 0;
}
int main()
{
    int length=0,lowerCase=0,UpperCase=0,digitN=0,specialC=0,specialx_count=0;
    char Ch;
    FILE * infile;
    infile = fopen("input.txt","r");
    if (infile==NULL)
    {
         exit(1);
    }
    while ((Ch=fgetc(infile))!=EOF&&Ch!='\n')
    {
          length++;
          if (LowerCase(Ch)==1) ++lowerCase;
          else if (upperCase(Ch)==1) ++UpperCase;
          else if (number(Ch)==1) ++digitN;
          else if (special(Ch)==1) ++specialC;
          else ++specialx_count;
    }
    if (length<4 || length>12)
    {
        printf("NO");
        return 0;
    }
    else if (lowerCase> 0 && UpperCase > 0 && digitN > 0 && specialC > 0 && specialx_count==0) {
          printf("OK");}
          else
            printf("NO");
    fclose(infile);
    return 0;
}
