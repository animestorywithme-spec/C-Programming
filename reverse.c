#include <stdio.h>
int main(){
    int number = 1234;
    int digit,reverse=0;
    while(number!=0){
        digit = number % 10;
        reverse= reverse * 10 + digit;
        number = number / 10;

    }
    printf("Reverse = %d", reverse);

    return 0;
}
