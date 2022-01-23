//Converting from points to letter Grades
#include <stdio.h>
#include <stdlib.h>

int main()
{ int n;
  scanf("%d",&n);

  if (n<50)
  {
      printf("FF 0");
  }
  else if (n<60)
  {
      printf("FD 0.5");
  }
  else if (n<65)
  {
     printf("DD 1");
  }
  else if (n<70)
  {
      printf("DC 1.5");
  }
  else if (n<75)
  {
      printf("CC 2");
  }
  else if (n<80)
  {
      printf("CB 2.5");
  }
  else if (n<85)
  {
      printf("BB 3");
  }
  else if (n<90)
  {
      printf("BA 3.5");
  }
  else if (n<101)
  {
      printf("AA 4");
  }
    return 0;
}
