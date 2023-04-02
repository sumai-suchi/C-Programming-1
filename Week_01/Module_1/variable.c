#include <stdio.h>
int main()
{
    int mahin = 10;
    float chy = 10.5;
    char d1 = 'D';
    /* printf("%d\n", mahin);
    printf("%f\n", chy);
    printf("%c", d1); */
    //printf("%d %f %c", mahin, chy, d1); // in a single line

    float floatingNum = 1000.52;
    // printf("%0.2f", floatingNum);

    return 0;
}

// every variable take 4 byte space in ram
// int -> %d (if you want to print integer)
// float -> %f (if you want to print float)
// floating Number Control -> %0.2f (1000.520020 to 1000.52)
// char -> %c (if you want to print character)