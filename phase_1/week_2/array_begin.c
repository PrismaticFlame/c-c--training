#include<stdio.h>

int foo(int []);

int main(void) {

    int x[12];

    printf("Where declared: %zu\n", sizeof x);
    printf("Where declared: %zu\n", sizeof(int));

    printf("Where declared: %zu\n", sizeof x / sizeof(int));

    foo(x);

    int a[5] = {22, 37, 3490};

    for (int i = 0; i < 5; i++) {
        printf("%zu ", a[i]);
    }

    printf("\n");

    int row, col;

    int b[2][5] = {      // Initialize a 2D array
        {0, 1, 2, 3, 4},
        {5, 6, 7, 8, 9}
    };

    for (row = 0; row < 2; row++) {
        for (col = 0; col < 5; col++) {
            printf("(%d,%d) = %d\n", row, col, b[row][col]);
        }
    }
}

int foo(int x[12]) {

    printf("Where passed: %zu\n", sizeof x);
    printf("Where passed: %zu\n", sizeof(int));

    printf("Where passed: %zu\n", sizeof x / sizeof(int));
}
