#include <stdio.h>

int foo(void);  // we've told the C compiler in advance that we will be using a function called foo after main has been declared

int main(void) {
    int i;

    i = foo();

    printf("%d\n", i);
}

int foo(void) {
    return 1337;
}