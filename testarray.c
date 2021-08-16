#include <stdio.h>

int main(void) {
    long double h = 2.0;
    int ar[5] = {1,2,3,4,5};
    printf("%i\n", ar[3]);
    printf("%i\n", ar[(int) h]);
}