#include <stdio.h>

int my_isalnum(int c) {
    return (c >= '0' && c <= '9') ||
           (c >= 'a' && c <= 'z') ||
           (c >= 'A' && c <= 'Z');
}

int my_isalpha(int c) {
    return (c >= 'a' && c <= 'z') ||
           (c >= 'A' && c <= 'Z');
}

int my_islower(int c) {
    return c >= 'a' && c <= 'z';
}

int my_isupper(int c) {
    return c >= 'A' && c <= 'Z';
}

int my_isdigit(int c) {
    return c >= '0' && c <= '9';
}

int my_isxdigit(int c) {
    return (c >= '0' && c <= '9') ||
           (c >= 'a' && c <= 'f') ||
           (c >= 'A' && c <= 'F');
}

int my_isspace(int c) {
    return c == ' ' || (c >= '\t' && c <= '\r');
}

int my_isblank(int c) {
    return c == ' ' || c == '\t';
}

int my_ispunct(int c) {
    return ((c >= 33 && c <= 47) || (c >= 58 && c <= 64) ||
            (c >= 91 && c <= 96) || (c >= 123 && c <= 126)) &&
           !my_isspace(c) && !my_isalnum(c);
}

int my_toupper(int c) {
    if (my_islower(c)) {
        return c - 'a' + 'A';
    }
    return c;
}

int my_tolower(int c) {
    if (my_isupper(c)) {
        return c - 'A' + 'a';
    }
    return c;
}

int main() {
    char c;
    scanf("%c", &c);
    printf("isalnum: %d\n", my_isalnum(c));
    printf("isalpha: %d\n", my_isalpha(c));
    printf("islower: %d\n", my_islower(c));
    printf("isupper: %d\n", my_isupper(c));
    printf("isdigit: %d\n", my_isdigit(c));
    printf("isxdigit: %d\n", my_isxdigit(c));
    printf("isspace: %d\n", my_isspace(c));
    printf("isblank: %d\n", my_isblank(c));
    printf("ispunct: %d\n", my_ispunct(c));
    printf("toupper: %c\n", my_toupper(c));
    printf("tolower: %c\n", my_tolower(c));

    return 0;
}