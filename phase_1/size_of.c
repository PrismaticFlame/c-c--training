#include<stdio.h>
#include<stdint.h>
#include<string.h>

int main(void){
    printf("The size of a integer: %zu\n", sizeof(int));
    printf("The size of a float: %zu\n", sizeof(float));
    printf("The size of a char: %zu\n", sizeof(char));
    printf("The size of a string: %zu\n", sizeof(char *));
    printf("The size of a short: %zu\n", sizeof(short));
    printf("The size of a long: %zu\n", sizeof(long));
    printf("The size of a long long: %zu\n", sizeof(long long));
    printf("The size of a unsigned: %zu\n", sizeof(unsigned char));
    printf("The size of a double: %zu\n", sizeof(double));
    printf("The size of a long double: %zu\n", sizeof(long double));
    printf("The size of a _Bool: %zu\n", sizeof(_Bool));
    printf("The size of a int8_t: %zu\n", sizeof(int8_t));
    printf("The size of a uint32_t: %zu\n", sizeof(uint32_t));
}