#include <stdio.h>
int main()
{
    int sum = 0;
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    printf("%d", sum);

    return 0;
}

//formula to get summation of i to n = n*(n+1)/2