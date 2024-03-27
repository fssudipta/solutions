#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(char *str)
{
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right)
    {
        if (str[left] != str[right])
        {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main()
{
    char str[] = "radar";
    if (isPalindrome(str))
    {
        printf("\"%s\" is a palindrome.\n", str);
    }
    else
    {
        printf("\"%s\" is not a palindrome.\n", str);
    }

    return 0;
}
