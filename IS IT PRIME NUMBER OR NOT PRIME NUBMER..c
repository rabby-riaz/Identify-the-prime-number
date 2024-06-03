#include <stdio.h>

// Written by Rabby Hasan Riaz. I love programming.

int main() {
    int num, flag = 0;
    printf("Enter a Positive Number: ");
    scanf("%d", &num);
    if(num == 0 || num == 1){
        flag = 1;
    }
    for(int i = 2; i <= num / 2; i++){
        if(num % i == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("Prime Number.");
    }
    else{
        printf("Not a Prime Number.");
    }

    return 0;
}
