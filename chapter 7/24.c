#include <stdio.h>
#include <string.h>

void encode(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        str[i] = str[i] + 2;
        i++;
    }
}

void decode(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        str[i] = str[i] - 2;
        i++;
    }
}

int main()
{
    char str_encode[] = "madam";
    encode(str_encode);
    printf("Encoded string: %s\n", str_encode);

    char str_decode[] = "pcfcp";
    decode(str_decode);
    printf("Decoded string: %s\n", str_decode);

    return 0;
}
