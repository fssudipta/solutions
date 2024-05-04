#include <stdio.h>
#include <string.h>

void swapStrings(char *str1, char *str2)
{
    char temp[MAX_LENGTH];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

int main()
{
    char names[10][50];
    int num_names;
    printf("Enter the number of names (up to %d): ", MAX_NAMES);
    scanf("%d", &num_names);
    getchar(); // Consume newline arki

    printf("Enter %d names:\n", num_names);
    for (int i = 0; i < num_names; i++)
    {
        fgets(names[i], 50, stdin);
        int len = strlen(names[i]);
        if (names[i][len - 1] == '\n')
        {
            names[i][len - 1] = '\0'; // Remove newline 
        }
    }
    for (int i = 0; i < num_names - 1; i++)
    {
        for (int j = 0; j < num_names - i - 1; j++)
        {
            int len1 = strlen(names[j]);
            int len2 = strlen(names[j + 1]);
            int min_len = len1 < len2 ? len1 : len2;
            int k;
            for (k = 0; k < min_len; k++)
            {
                if (names[j][k] != names[j + 1][k])
                {
                    break;
                }
            }
            if (k == min_len && len1 > len2)
            {
                swapStrings(names[j], names[j + 1]);
            }
            else if (strcmp(names[j], names[j + 1]) > 0)
            {
                swapStrings(names[j], names[j + 1]);
            }
        }
    }
    printf("\nSorted names:\n");
    for (int i = 0; i < num_names; i++)
    {
        printf("%s\n", names[i]);
    }
    return 0;
}
