#include <stdio.h>
int main()
{
    int n, x;
    scanf("%d", &n);
    int max = 0;
    for(int i=1; i<=n; i++){
        scanf("%d", &x);
        if(max < x){
            max = x;
        }
    }
    printf("%d\n", max);

    return 0;
}