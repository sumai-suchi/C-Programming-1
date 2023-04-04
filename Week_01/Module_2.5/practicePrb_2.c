#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int sum = x + y;
    int sub = x - y;
    int mul = x * y;
    float div = x*1.0 / y;
    printf("Summation: %d\nSubtraction: %d\nMultiplication: %d\nDivision: %0.2f", sum, sub, mul, div);
    
    return 0;
}