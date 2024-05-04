#include <stdio.h>
#include <ctype.h>

#define NUM_LETTERS 26

void initializeArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = 0;
    }
}

void countOccurrences(const char *str, int counts[])
{
    while (*str)
    {
        if (isalpha(*str))
        {
            counts[tolower(*str) - 'a']++;
        }
        str++;
    }
}

void printCounts(const int counts[])
{
    printf("Number of occurrences of each letter:\n");
    for (int i = 0; i < NUM_LETTERS; i++)
    {
        printf("%c: %d\n", 'a' + i, counts[i]);
    }
}

void printHistogram(const int counts[])
{
    printf("\nHorizontal Histogram:\n");
    for (int i = 0; i < NUM_LETTERS; i++)
    {
        printf("%c: ", 'a' + i);
        for (int j = 0; j < counts[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    char str[1000];
    int counts[NUM_LETTERS];

    initializeArray(counts, NUM_LETTERS);

    printf("Enter a very long string (up to 999 characters):\n");
    fgets(str, sizeof(str), stdin);

    countOccurrences(str, counts);

    printCounts(counts);

    printHistogram(counts);

    return 0;
}
