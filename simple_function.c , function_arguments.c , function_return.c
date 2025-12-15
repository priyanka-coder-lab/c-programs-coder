simple_function.c

  #include <stdio.h>

void message() {
    printf("Welcome to C Programming");
}

int main() {
    message();
    return 0;
}

function_arguments.c

  #include <stdio.h>

void add(int a, int b) {
    int sum = a + b;
    printf("Sum = %d", sum);
}

int main() {
    add(10, 20);
    return 0;
}

function_return.c

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

  
