#include <stdio.h>

int main(void){
    int input;
    printf("Enter an integer bigger than 5: ");
    scanf("%d", &input);
    if(input > 5){
        printf("Sweet!");
    }
    return 0;
}
