#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int firstD = x/10;
    int lastD = x%10;
    if(lastD%firstD == 0 || firstD%lastD == 0){
        printf("YES");
    }else{
        printf("NO");
    }

    return 0;
}