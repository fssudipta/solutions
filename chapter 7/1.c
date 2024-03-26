#include <stdio.h>

int getint(char * message)
{
    printf("%s", message);
    int n;
    scanf("%d", &n);
    return n;
}

int main()
{
    int num=getint("Enter a number: ");
    printf("output: %d", num);
    return 0;
}