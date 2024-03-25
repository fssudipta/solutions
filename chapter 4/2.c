#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    double sum = 0, sum_of_squares = 0, num;
    for (int i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%lf", &num);
        sum += num;
        sum_of_squares += num * num;
    }
    double mean = sum / n;
    double mean_of_squares = sum_of_squares / n;
    double diff = mean_of_squares - mean * mean;
    double standard_deviation = sqrt(diff);

    printf("Mean: %.2lf\n", mean);
    printf("Standard Deviation: %.2lf\n", standard_deviation);

    return 0;
}
