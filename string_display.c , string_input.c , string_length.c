string_display.c

  #include <stdio.h>

int main() {
    char name[20] = "Priyanka";
    printf("Name = %s", name);
    return 0;
}

string_input.c

  #include <stdio.h>

int main() {
    char name[20];
    printf("Enter name: ");
    scanf("%s", name);
    printf("Name = %s", name);
    return 0;
}

string_length.c

  #include <stdio.h>
#include <string.h>

int main() {
    char str[20] = "Hello";
    int len;

    len = strlen(str);
    printf("Length = %d", len);
    return 0;
}
