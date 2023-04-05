#include <stdio.h>
int main()
{
    int i;

    // While Loop
    i = 1;
    while (i <= 5){
        printf("%d\n", i);
        i++;
    }

    // Do While Loop
    i = 1;
    do{
        printf("%d\n", i);
        i++;
    }
    while (i<=6);
    
    return 0;
}