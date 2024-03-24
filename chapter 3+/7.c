#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a == 0) {
        if (b == 0) {
            printf("The equation is not solvable.\n");
        } else {
            printf("The equation is linear.\n Solution is %f", (double)-c / b);
        }
    } else {
        double d = b*b - 4*a*c;
        if (d < 0) {
            printf("No real solutions. %f\n", sqrt(-d));
        } else {
            double sqrt_d = sqrt(d);
            double x1 = (-b + sqrt_d) / (2*a);
            double x2 = (-b - sqrt_d) / (2*a);
            printf("Solutions are: %f %f\n", x1, x2);
        }
    }

    return 0;
}
