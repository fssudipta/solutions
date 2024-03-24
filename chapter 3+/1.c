#include<stdio.h>
int main()
{
    int h, w;
    scanf("%d %d", &h, &w);
    float BMI=w/(h*h);
    if(BMI<18.5)
    printf("underweight");
    else if(BMI>18.5 && BMI<25)
    printf("healthy");
    else printf("overweight");
    return 0;
}