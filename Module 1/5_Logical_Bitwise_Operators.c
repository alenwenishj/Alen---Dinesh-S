#include <stdio.h>
int main()
{
    int a = 5, b = 5, c = 10, result;
    printf("\tLogical Operators\n\n");
    result = (a == b) && (c > b);
    printf("(a == b) && (c > b) is %d \n", result);
    result = (a == b) && (c < b);
    printf("(a == b) && (c < b) is %d \n", result);
    result = (a == b) || (c < b);
    printf("(a == b) || (c < b) is %d \n", result);
    result = (a != b) || (c < b);
    printf("(a != b) || (c < b) is %d \n", result);
    result = !(a != b);
    printf("!(a != b) is %d \n", result);
    result = !(a == b);
    printf("!(a == b) is %d \n", result);
    printf("\n\tBitwise Operators\n\n");
    printf("a & b is %d\n", a & b);
    printf("a | b is %d\n", a | b);
    printf("a ^ b is %d\n", a ^ c);
    printf("~c is %d\n", ~c);
    printf("a Right shift by 2 is %d\n", a>>2);
    printf("c Left shift by 3 is %d\n", c<<3);
    return 0;
}