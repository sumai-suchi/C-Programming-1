#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if(tk >= 5000){
        printf("Will go to Cox's Bazar!!!");

        if(tk >= 10000){
            printf("\nWill go to Saint Martin!!!");
        }else{
            printf("\nCome back.");
        }
    }else{
        printf("Not going anywhere.");
    }

    return 0;
}