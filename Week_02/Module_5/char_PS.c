#include <stdio.h>
int main()
{
    char givenChar;
    scanf("%c", &givenChar);
    if(givenChar >= 65 && givenChar <= 90){
        char lowerChar = givenChar + 32;
        printf("%c", lowerChar);
    }else if(givenChar >= 97 && givenChar <= 122){
        char upperChar = givenChar - 32;
        printf("%c", upperChar);
    }

    return 0;
}

// Convert character upperCharacter to lowerCharacter or vice versa.