#include <stdio.h>

int main(void){
    int input;
    printf("Enter an integer between 1 and 100: ");
    scanf("%d", &input);
    if(input % 3 == 0) {
        printf("Multiple of three.");
    } else if(input % 2 == 0){
        printf("Multiple of two.");
    } else {
        printf("Multiple of another number.");
    }
    return 0;
}

