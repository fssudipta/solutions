#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverseString(char *str)
{
    int i, j;
    char temp;
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main()
{
    int n;
    char str[50];
    printf("Enter an integer: ");
    scanf("%d", &n);
    itoa(n, str, 10);

    reverseString(str);
    printf("Reversed digits: %s\n", str);
    return 0;
}
