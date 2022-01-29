#include <stdio.h>
#include <stdlib.h>

int main()
{   float BMI,wheight,height;
    scanf("%f%f",&height,&wheight);
    BMI=wheight/(height*height);
    if (BMI<18.5)
    {
        printf("%.3f Underweight",BMI);
    }
    else if (BMI<25)
    {
        printf("%.3f Normal",BMI);
    }
    else if (BMI<30)
    {
        printf("%.3f Overweight",BMI);
    }
    else
    {
        printf("%.3f Obese",BMI);
    }
    return 0;
}
