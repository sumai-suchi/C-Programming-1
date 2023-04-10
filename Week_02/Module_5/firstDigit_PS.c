#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int n = x / 1000;
    if(n%2 == 0){
        printf("EVEN");
    }else{
        printf("ODD");
    }

    return 0;
}

// Find first digit from the numbers and print is it even or odd.