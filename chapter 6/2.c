#include <stdio.h>
#include <string.h>

void reverseString(const char *input, char *output)
{
    int length = strlen(input);
    for (int i = length - 1, j = 0; i >= 0; i--, j++)
    {
        output[j] = input[i];
    }
    output[length] = '\0';
}

void InPlace(char *str)
{
    int length = strlen(str);
    for (int i = 0, j = length - 1; i < j; i++, j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main()
{
    char input[1000];
    char output[1000];

    printf("Enter a string: ");
    scanf("%[^\n]", input);

    reverseString(input, output);
    printf("Reversed string: %s\n", output);

    InPlace(input);
    printf("String reversed in place: %s\n", input);

    return 0;
}
