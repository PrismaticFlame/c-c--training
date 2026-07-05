#include<stdio.h>

int main(void){
    int x = 10;
    int y = 0;
    y += x > 10? 17: 37;

    printf("%d\n", y);

    printf("The number %d is %s.\n", x, x % 2 == 0? "even": "odd");
}