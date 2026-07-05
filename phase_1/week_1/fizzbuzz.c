#include<stdio.h>

int main(void){
    for(int i = 1; i < 26; i++){
        if((i % 3 == 0) && (i % 5 == 0)){
            printf("FizzBuzz ");
        } else if (i % 5 == 0){
            printf("Buzz ");
        } else if (i % 3 == 0){
            printf("Fizz ");
        } else {
            printf("%d ", i);
        }
    }
    return 0;
}

// 1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz 16 17 Fizz 19 Buzz Fizz 22 23 Fizz Buzz
// 1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz 16 17 Fizz 19 Buzz Fizz 22 23 Fizz Buzz