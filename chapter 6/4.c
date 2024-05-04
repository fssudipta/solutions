#include <stdio.h>

int main()
{
    char str[1000];
    int wordCount = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] == ' ' || str[i] == '\n') && (str[i - 1] != ' ' && str[i - 1] != '\n'))
        {
            wordCount++;
        }
    }

    if (str[0] != '\0' && str[0] != ' ' && str[0] != '\n')
    {
        wordCount++;
    }

    printf("Number of words: %d\n", wordCount);

    return 0;
}
