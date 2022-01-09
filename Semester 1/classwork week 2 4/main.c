#include <stdio.h>
#include <stdlib.h>

int main()
{ float amount,eurorate,dollarrate;
  float x;
  printf("ENTER eurorate,dollarrate and amount:\n");
  scanf("%f %f\n%f",&eurorate,&dollarrate,&amount);
  x=(amount*eurorate)/dollarrate;

    printf("%.2f",x);
    return 0;
}
