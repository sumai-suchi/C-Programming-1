#include <stdio.h>
int main(){
    int tk;
    scanf("%d", &tk);
    if(tk >= 100){
        printf("I'll eat burger");
    }else if(tk >= 50){
        printf("I'll eat fuchka");
    }else{
        printf("I will eat nothing");
    }

    return 0;
}