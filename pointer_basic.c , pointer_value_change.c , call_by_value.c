pointer_basic.c

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

pointer_value_change.c

  #include <stdio.h>

int main() {
    int a = 5;
    int *p = &a;

    *p = 20;

    printf("Updated value of a = %d", a);
    return 0;
}

call_by_value.c

  #include <stdio.h>

void change(int x) {
    x = 50;
}

int main() {
    int a = 10;
    change(a);
    printf("Value of a = %d", a);
    return 0;
}
  
  
