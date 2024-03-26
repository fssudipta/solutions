#include <stdio.h>
#include <math.h>

double roundToNDecimals(double num, int n) {
    double multiplier = pow(10, n);
    double rounded_num = round(num * multiplier) / multiplier;
    return rounded_num;
}

double truncToNDecimals(double num, int n) {
    double multiplier = pow(10, n);
    double truncated_num = trunc(num * multiplier) / multiplier;
    return truncated_num;
}

double ceilToNDecimals(double num, int n) {
    double multiplier = pow(10, n);
    double ceiled_num = ceil(num * multiplier) / multiplier;
    return ceiled_num;
}

double floorToNDecimals(double num, int n) {
    double multiplier = pow(10, n);
    double new=floor(num*multiplier);
    double floored_num = new / multiplier;
    return floored_num;
}

int main() {
    double num;
    int n;
    scanf("%lf %d", &num, &n);
    
    printf("Original number: %lf\n", num);
    printf("Rounded to %d decimal places: %lf\n", n, roundToNDecimals(num, n));
    printf("Truncated to %d decimal places: %lf\n", n, truncToNDecimals(num, n));
    printf("Ceiled to %d decimal places: %lf\n", n, ceilToNDecimals(num, n));
    printf("Floored to %d decimal places: %lf\n", n, floorToNDecimals(num, n));
    
    return 0;
}
