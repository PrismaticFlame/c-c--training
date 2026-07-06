#include<stdio.h>

void increment(int *p){
    *p = *p + 1;
}

int main(void){
    int i = 10;
    int *j = &i;  //address-of, turns it into a pointer to i

    printf("i is %d\n", i);
    printf("j (which is pointing to i) is also %d\n", *j);

    increment(j);

    printf("i is %d\n", i);
}