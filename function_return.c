#include <stdio.h>

int square(int n) {
    return n * n;
}

int main() {
    int result;
    result = square(5);
    printf("Square = %d", result);
    return 0;
}
