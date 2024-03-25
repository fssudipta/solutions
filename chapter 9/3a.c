#include<stdio.h>
#include<math.h>
typedef struct 
{
    double x;
    double y;
}coordinate;

double dist_2d(coordinate* a, coordinate* b)
{
    double dist;
    dist = sqrt((((a->x)-(b->x))*((a->x)-(b->x)))+(((a->y)-(b->y))*((a->y)-(b->y))));
    return dist;
}
int main()
{
    coordinate points[2];
    printf("Enter coordinates of 2 points:\n");
    for(int i=0;i<2;i++)
    {
        scanf("%lf %lf",&points[i].x,&points[i].y);
    }
    double d=dist_2d(&points[0],&points[1]);
    printf("Distance between two points: %lf",d);
    return 0;
}
