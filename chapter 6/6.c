#include <stdio.h>
#include <ctype.h>
#include <string.h>

void trim(char *str)
{
    int start = 0, end = strlen(str) - 1;
    while (isspace(str[start]))
        start++;
    while (end >= start && isspace(str[end]))
        end--;
    int i;
    for (i = 0; i <= end - start; i++)
    {
        str[i] = str[start + i];
    }
    str[i] = '\0';
}
int main()
{
    char lines[1000][1000];
    char longest[1000] = "";
    int longlen = 0;
    int numlines;
    printf("Enter number of lines: ");
    scanf("%d", &numlines);
    getchar(); //Consume the newline characte
    printf("Enter lines:\n");
    for (int i = 0; i < numlines; i++)
    {
        scanf(" %[^\n]", lines[i]); //space before %[^\n] to consume leading whitespace
        trim(lines[i]);
        int length = strlen(lines[i]);
        if (length > longlen)
        {
            longlen = length;
            strcpy(longest, lines[i]);
        }
    }
    printf("Lines after trimming:\n");
    for (int i = 0; i < numlines; i++)
    {
        printf("%s\n", lines[i]);
    }
    printf("\nLongest line length: %d\n", longlen);
    printf("Longest line: %s\n", longest);
    return 0;
}
