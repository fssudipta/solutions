#include<stdio.h>
#include<math.h>
typedef struct 
{
    double x;
    double y;
}coordinate;

typedef struct 
{
    coordinate a;
    coordinate b;
    coordinate c;
}triangle;

double area(triangle* tri)
{
    double ar;
    ar=0.5*fabs(((tri->a).x)*(((tri->b).y)-((tri->c).y))+((tri->b).x)*(((tri->c).y)-((tri->a).y))+((tri->c).x)*(((tri->a).y)-((tri->b).y)));
    return ar;
}

int main()
{
    coordinate points[3];
    printf("Enter coordinates of the 3 points of the triangle:\n");
    for(int i=0;i<3;i++)
    {
        scanf("%lf %lf",&points[i].x,&points[i].y);
    }
    triangle t={points[0], points[1], points[2]};
    double ar=area(&t);
    printf("Area of the triangle: %lf",ar);
    return 0;
}
 
