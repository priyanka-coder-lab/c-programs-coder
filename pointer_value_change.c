#include <stdio.h>

int main() {
    int a = 5;
    int *p = &a;

    *p = 20;

    printf("Updated value of a = %d", a);
    return 0;
}
