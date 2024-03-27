#include <stdio.h>

//  Take the right most bit of an unsigned number a into b using a bitwise &. Next,
// perform left shift << on b by 31 places to take the bit in b to the right most position.
// Next, perform right shift >> on a by one place and take the result in another variable
// c. Next, combine b and c together by using |. Thus, you have got a method to rotate
// a number towards right by one place. Output both the original and the resultant
// number. Use a similar technique to left rotate a number by one place.

int main()
{
    unsigned int a, b, c, d, e, left;
    scanf("%u", &a);
    b = a & 1;  // got the rightmost bit
    b <<= 31;   // took it to the left most position
    c = a >> 1; // right shift
    unsigned int res = b | c;
    printf("%u\n", res);
    d = (a & (1 << 31)) >> 31; // got the leftmost bit, and then took it to the rightmost position
    e = a << 1;                // left shift
    left = e | d;
    printf("%u", left);
    return 0;
}