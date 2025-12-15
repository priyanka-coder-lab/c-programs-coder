array_print.c

  #include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int i;

    for(i = 0; i < 5; i++) {
        printf("%d\n", a[i]);
    }
    return 0;
}

array_input_output.c

  #include <stdio.h>

int main() {
    int a[5], i;

    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("Array elements are:\n");
    for(i = 0; i < 5; i++) {
        printf("%d\n", a[i]);
    }
    return 0;
}

array_sum.c

  #include <stdio.h>

int main() {
    int a[5], i, sum = 0;

    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("Sum = %d", sum);
    return 0;
}

  
  
