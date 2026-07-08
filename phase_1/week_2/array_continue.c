#include<stdio.h>

void times2(int *a, int len) {
    for (int i = 0; i < len; i++) {
        printf("Times 2:%d\n", a[i] * 2);
    }
}

void times3(int a[], int len) {
    for (int i = 0; i < len; i++) {
        printf("Times 3: %d\n", a[i] * 3);
    }
}

void times4(int a[5], int len) {
    for (int i = 0; i < len; i++) {
        printf("Times 4: %d\n", a[i] * 4);
    }
}

void double_array(int *a, int len) {
    for (int i = 0; i < len; i++) 
        a[i] *= 2;
}

void print_2D_array(int a[2][3]) {
    printf("Printing 2D array...\n");
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++) {
            printf("%d ", a[row][col]);
        }
        printf("\n");
    }
}

int main(void) {
    int x[5] = {11, 22, 33, 44, 55};

    times2(x, 5);
    times3(x, 5);
    times4(x, 5);

    int y[5] = {1, 2, 3, 4, 5};

    double_array(y, 5);

    for (int i = 0; i < 5; i ++)
        printf("After doubling: %d\n", y[i]);

    int z[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    print_2D_array(z);
}