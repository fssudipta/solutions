#include <stdio.h>
#include <string.h>

int main()
{
    char date[11];
    scanf("%[^\n]", date);
    char *p = strtok(date, "-");
    while (p != NULL)
    {
        printf("%s ", p);
        p = strtok(NULL, "-");
    }
    return 0;
}