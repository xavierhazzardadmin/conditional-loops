#include <stdio.h>

int main(void){
    int input;
    printf("Enter an integer between 1 and 20: ");
    scanf("%d", &input);

    switch(input){
        case 5:
            printf("5!");
            break;
        case 10:
            printf("10!");
            break;
        case 15:
            printf("15");
            break;
        default:
            printf("Your number is: %d\n", input);
    }

    return 0;
}
