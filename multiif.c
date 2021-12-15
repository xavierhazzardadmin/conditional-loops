#include <stdio.h>

int main(void){
    int input;
    printf("Enter an integer greater between 1 and 5: ");
    scanf("%d", &input);
    if(input > 0 && input < 6){
        printf("Valid!\n");
    }
    return 0;
}

int main(void){
    int input;
    printf("Enter either 1 or 5: ");
    scanf("%d", &input);
    if(input == 1 || input == 5){
        printf("Valid!\n")
    }
    return 0;
}
