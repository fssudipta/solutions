#include <stdio.h>
#include <string.h>

int main()
{
    //chatGPT :v
    char dest1[20] = "Hello, ";
    const char src1[] = "world!";
    printf("strncat demo:\n");
    printf("Before strncat: dest1 = %s\n", dest1);
    strncat(dest1, src1, 5);
    printf("After strncat: dest1 = %s\n\n", dest1);
    char dest2[20];
    const char src2[] = "Hello, world!";
    printf("strncpy demo:\n");
    printf("Before strncpy: dest2 = %s\n", dest2);
    strncpy(dest2, src2, 5);
    dest2[5] = '\0';
    printf("After strncpy: dest2 = %s\n\n", dest2);
    const char str1[] = "apple";
    const char str2[] = "banana";
    printf("strncmp demo:\n");
    printf("Comparison result for first 3 characters: %d\n", strncmp(str1, str2, 3));
    printf("Comparison result for first 5 characters: %d\n", strncmp(str1, str2, 5));
    printf("Comparison result for first 6 characters: %d\n", strncmp(str1, str2, 6));
    return 0;
}
