#include <stdio.h>
#include <string.h>

int main() {
    int a = 20;
    int b = 10;

    printf("Value of b before calling memcpy: %d\n", b);

    memcpy(&b, &a, sizeof(int));

    printf("Value of b after calling memcpy: %d\n", b);

    int c = 20;
    int d = 10;

    printf("Value of d before calling hand-written memcpy: %d\n", d);

    unsigned char *num1 = (unsigned char *)&c;
    unsigned char *num2 = (unsigned char *)&d;

    for (size_t i = 0; i < sizeof(c); i++) {
        num2[i] = num1[i];
    }

    printf("Value of d after calling hand-written memcpy: %d\n", d);
    
    return 0;
}