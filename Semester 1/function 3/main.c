//mhoxha20
//A simple exercise that reads a number from a file and then prints n rows with 3 UpperCase 3 LowerCase and 2 digits
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
    return (rand()%('Z'-'A'+1)+'A');//function that returns a letter from A to Z uppercased
}
char GetLower ()
{
    return (rand()%('z'-'a'+1)+'a');//function that returns a letter from A to Z lowercased
}
int GetDigit ()
{
    return (rand()%10);//function that returns a number from 0 to 9
}
