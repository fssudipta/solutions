#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(const char *str)
{
    int length = strlen(str);
    int i, j;
    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        while (!isalpha(str[i]) && i < j)
        {
            i++;
        }
        while (!isalpha(str[j]) && i < j)
        {
            j--;
        }
        if (tolower(str[i]) != tolower(str[j]))
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char str[1000];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    if (isPalindrome(str))
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
