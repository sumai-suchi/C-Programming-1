#include <stdio.h>
int main()
{
    char c;
    scanf("%c", &c);
    if(c>=97 && c<=122){
        if(c==122){
            c = 97;
            printf("%c", c);
        }else{
            c++;
            printf("%c", c);
        }
    }else{
        printf("Wrong input.");
    }

    return 0;
}