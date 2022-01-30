//mhoxha20
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
char GetUpper ();
char GetLower ();
int GetDigit ();
int main()
{
    int i,n;
    FILE * infile;
    infile = fopen("input.txt","r");
    if (infile==NULL)
    {
         exit(1);
    }
    srand(time(NULL));
    fscanf(infile,"%d",&n);
    for (i=0;i<n;i++)
    {
        printf("%c%c%c%c%c%c%d%d\n",GetUpper(),GetUpper(),GetUpper(),GetLower(),GetLower(),GetLower(),GetDigit(),GetDigit());
    }

    fclose(infile);
    return 0;
}
char GetUpper ()
{
    return (rand()%('Z'-'A'+1)+'A');
}
char GetLower ()
{
    return (rand()%('z'-'a'+1)+'a');
}
int GetDigit ()
{
    return (rand()%10);
}
