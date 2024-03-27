#include <stdio.h>
#include <string.h>

int str_to_int(const char *str)
{
    int result = 0;
    int sign = 1;
    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    while (*str != '\0')
    {
        result = result * 10 + (*str - '0');
        str++;
    }
    return sign * result;
}

float str_to_float(const char *str)
{
    float result = 0.0;
    float sign = 1.0;
    if (*str == '-')
    {
        sign = -1.0;
        str++;
    }
    while (*str != '\0' && *str != '.')
    {
        result = result * 10.0 + (*str - '0');
        str++;
    }
    if (*str == '.')
    {
        float fraction = 0.1;
        str++;
        while (*str != '\0')
        {
            result += (*str - '0') * fraction;
            fraction *= 0.1;
            str++;
        }
    }
    return sign * result;
}

void int_to_str(int num, char *str)
{
    int i = 0;
    if (num < 0)
    {
        str[i++] = '-';
        num = -num;
    }
    int divisor = 1;
    while (num / divisor >= 10)
    {
        divisor *= 10;
    }
    while (divisor != 0)
    {
        str[i++] = num / divisor + '0';
        num %= divisor;
        divisor /= 10;
    }
    str[i] = '\0';
}

void float_to_str(float num, char *str, int precision)
{
    int whole_part = (int)num;
    float fraction_part = num - whole_part;
    int_to_str(whole_part, str);
    int length = strlen(str);
    str[length++] = '.';
    int i;
    for (i = 0; i < precision; i++)
    {
        fraction_part *= 10;
        int digit = (int)fraction_part;
        str[length++] = digit + '0';
        fraction_part -= digit;
    }
    str[length] = '\0';
}

int main()
{
    char str[] = "543245";
    float num = 8.345654;
    int precision = 3;
    printf("string to integer, %d\n", str_to_int(str));
    printf("string to float, %lf\n", str_to_float(str));
    int_to_str(5, str);
    printf("integer to string, %s\n", str);
    float_to_str(num, str, precision);
    printf("float to string, %s\n", str);
    return 0;
}