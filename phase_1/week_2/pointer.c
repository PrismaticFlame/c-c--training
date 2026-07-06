#include<stdio.h>

int main(void) {
    int i = 10;

    printf("The value of i is %d\n", i);
    printf("And its address is %p\n", (void *)&i);  // this is a cast, coercing the type of expression &i to be type void*

    int j; // j's type is "int"
    int *p; // p's type is "pointer to an int", or "int-pointer"

    p = &j;  // p now is assigned the address of j, so p is now "pointing" to j

    
}