//Exercise that shows where a point is located.
#include <stdio.h>
#include <stdlib.h>

int main()
{ int x,y;
  scanf("%d%d",&x,&y);

  if (x==0&&y==0)
  {
      printf("Center");
  }
  else if (x==0&&(y>0||y<0))
  {

      printf("Over Y axis");
  }
  else if (y==0&&(x>0||x<0))
  {
     printf("Over X axis");
  }
  else if (x>0&&y>0)
  {
      printf("Quadrant 1");
  }
  else if (x>0&&y<0)
  {
      printf("Quadrant 4");
  }
  else if (x<0&&y>0)
  {
      printf("Quadrant 2");
  }
  else if (x<0&&y<0)
  {
      printf("Quadrant 3");
  }
    return 0;
}
