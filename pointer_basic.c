#include <stdio.h>

int main() {
    int a = 10;
    int *p;

    p = &a;

    printf("Value of a = %d\n", a);
    printf("Address of a = %u\n", &a);
    printf("Value of p = %u\n", p);
    printf("Value at pointer = %d\n", *p);

    return 0;
}
