#include <stdio.h>

int putint(char *message, int n) {
    printf("%s %d\n", message, n);
    return n;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    putint("The number is:", n);
    return 0;
}
