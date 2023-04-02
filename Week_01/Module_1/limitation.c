#include <stdio.h>
int main()
{
    /* int a = 10000000000;
    printf("%d", a); */
    /* long long int b = 10000000000;
    printf("%lld", b); */
    float a = 22.123456789123456;
    printf("%0.6f", a);
    /* double a = 22.123456789123456;
    printf("%0.15lf", a); */

    return 0;
}

/*========= Integer will no longer than this range. =========*/
// int -> 32bit (10digit = {+-}1000000000 || {+-}10^9)
// long long int -> 62bit (20digit = {+-}1000000000000000000 || {+-}10^18)
// float -> will show max 6 digit after point
// double -> will show max 15 digit after point