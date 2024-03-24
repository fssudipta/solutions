#include <stdio.h>
#include <math.h>

double distance(double x1, double y1, double x2, double y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

double toDegrees(double radians)
{
    return radians * 180.0 / acos(-1);
}

int main()
{
    double x1, y1, x2, y2, x3, y3;

    printf("Enter the coordinates of the first vertex (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter the coordinates of the second vertex (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
    printf("Enter the coordinates of the third vertex (x3 y3): ");
    scanf("%lf %lf", &x3, &y3);

    double side1 = distance(x1, y1, x2, y2);
    double side2 = distance(x2, y2, x3, y3);
    double side3 = distance(x3, y3, x1, y1);

    if (side1 + side2 > side3 && side2 + side3 > side1 && side3 + side1 > side2)
    {
        printf("The triangle is valid.\n");

        double angle1 = acos((side2 * side2 + side3 * side3 - side1 * side1) / (2 * side2 * side3));
        double angle2 = acos((side3 * side3 + side1 * side1 - side2 * side2) / (2 * side3 * side1));
        double angle3 = acos((side1 * side1 + side2 * side2 - side3 * side3) / (2 * side1 * side2));

        angle1 = toDegrees(angle1);
        angle2 = toDegrees(angle2);
        angle3 = toDegrees(angle3);

        printf("Angles of the triangle are: %.2f degrees, %.2f degrees, and %.2f degrees.\n", angle1, angle2, angle3);

        if (side1 == side2 && side2 == side3)
            printf("The triangle is equilateral.\n");
        else if (side1 == side2 || side2 == side3 || side3 == side1)
            printf("The triangle is isosceles.\n");
        else
            printf("The triangle is scalene.\n");

        if (angle1 < 90 && angle2 < 90 && angle3 < 90)
            printf("The triangle is acute-angled.\n");
        else if (angle1 == 90 || angle2 == 90 || angle3 == 90)
            printf("The triangle is right-angled.\n");
        else
            printf("The triangle is obtuse-angled.\n");
    }
    else
    {
        printf("The triangle is not valid.\n");
    }

    return 0;
}
