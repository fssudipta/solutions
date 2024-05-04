#include <stdio.h>
#include <string.h>

#define MAX_WORD_LENGTH 50
#define MAX_FILENAME_LENGTH 100
#define MAX_LINE_LENGTH 1000

void searchAndReplace(FILE *inputFile, FILE *outputFile, const char *wordToReplace, const char *replacementWord)
{
    char line[MAX_LINE_LENGTH];
    char word[MAX_WORD_LENGTH];
    int wordFound;

    while (fscanf(inputFile, "%s", word) == 1)
    {
        wordFound = 0;

        if (strcmp(word, wordToReplace) == 0)
        {
            fprintf(outputFile, "%s ", replacementWord);
            wordFound = 1;
        }
        else
        {
            fprintf(outputFile, "%s ", word);
        }
    }
}

int main()
{
    char wordToReplace[MAX_WORD_LENGTH], replacementWord[MAX_WORD_LENGTH];
    FILE *inputFile, *outputFile;

    printf("Enter the word to replace: ");
    scanf("%s", wordToReplace);
    printf("Enter the replacement word: ");
    scanf("%s", replacementWord);

    inputFile = fopen("in.txt", "r");
    if (inputFile == NULL)
    {
        printf("Error: Unable to open input file.\n");
        return 1;
    }

    outputFile = fopen("out.txt", "w");
    if (outputFile == NULL)
    {
        printf("Error: Unable to open output file.\n");
        fclose(inputFile);
        return 1;
    }

    searchAndReplace(inputFile, outputFile, wordToReplace, replacementWord);

    fclose(inputFile);
    fclose(outputFile);

    printf("Search and replace completed successfully.\n");

    return 0;
}
