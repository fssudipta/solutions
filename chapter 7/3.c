#include<stdio.h>
#include<math.h>

float areaCircle(int n)
{
    float area;
    area = 3.1416*n*n;
    return area;
}

float circumCircle(int n)
{
    float circum= 2*3.1416*n;
    return circum;
}

int areaSquare(int a, int b)
{
    return a*b;
}

float diagonal(int a, int b)
{
    float d= pow((float)a, 2) + pow((float)b, 2);
    return sqrt(d);
}

int main()
{
    int n, a, b;
    printf("enter the radius, and two sides of a rectangle: ");
    scanf("%d %d %d", &n, &a, &b);
    printf("area of a circle: %f\n", areaCircle);
    printf("circumference of a circle: %f\n", circumCircle);
    printf("area of a square: %d\n", areaSquare);
    printf("lenth of a diagonal of the square: %f\n", diagonal);
    //similarly count surface area and volume
    return 0;
}