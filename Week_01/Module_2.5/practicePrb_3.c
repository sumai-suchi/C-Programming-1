#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n >= 0){
        if(n%2 == 1){
        printf("The given digit is even number.");
        }else{
            printf("The given digit is odd number.");
        }
    }else{
        printf("Give a positive number.");
    }

    return 0;
}