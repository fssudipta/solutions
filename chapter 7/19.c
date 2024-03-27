#include <stdio.h>

// tf

double evaluatePolynomial(double coefficients[], int degree, double x)
{
    double result = 0.0;
    double xPower = 1.0;

    for (int i = 0; i <= degree; i++)
    {
        result += coefficients[i] * xPower;
        xPower *= x;
    }

    return result;
}

int main()
{
    double coefficients[] = {3.0, 2.0, -1.0};
    int degree = 2;
    double x = 2.0;
    double result = evaluatePolynomial(coefficients, degree, x);
    printf("Result: %.2f\n", result);

    return 0;
}
