#include <stdio.h>
#include <math.h>

void solveLinearEquations(int a, int b, int c, int p, int q, int r, double *x, double *y)
{
    double determinant = a * q - b * p;
    if (determinant != 0)
    {
        *x = (c * q - b * r) / determinant;
        *y = (a * r - c * p) / determinant;
    }
    else
    {
        printf("The equations have no unique solution.\n");
    }
}

void solveQuadraticEquation(int a, int b, int c, double *x1, double *x2)
{
    double discriminant = b * b - 4 * a * c;
    if (discriminant > 0)
    {
        *x1 = (-b + sqrt(discriminant)) / (2 * a);
        *x2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("Solution of quadratic equation: x1 = %.2f, x2 = %.2f\n", *x1, *x2);

    }
    else if (discriminant == 0)
    {
        *x1 = *x2 = -b / (2 * a);
        printf("Roots are real and same.\n");
        printf("Solution of quadratic equation: x1 = %.2f, x2 = %.2f\n", *x1, *x2);
    }
    else
    {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("Root 1: %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2: %.2f - %.2fi\n", realPart, imaginaryPart);
    }
}

int main()
{
    int a1, b1, c1, p1, q1, r1;
    double x, y;
    printf("Enter coefficients and constants for the linear equations ax + by = c and px + qy = r:\n");
    scanf("%d %d %d %d %d %d", &a1, &b1, &c1, &p1, &q1, &r1);

    solveLinearEquations(a1, b1, c1, p1, q1, r1, &x, &y);
    printf("Solution of linear equations: x = %.2f, y = %.2f\n", x, y);

    int a2, b2, c2;
    double x1, x2;
    printf("\nEnter coefficients for the quadratic equation ax^2 + bx + c = 0:\n");
    scanf("%d %d %d", &a2, &b2, &c2);

    solveQuadraticEquation(a2, b2, c2, &x1, &x2);

    return 0;
}
