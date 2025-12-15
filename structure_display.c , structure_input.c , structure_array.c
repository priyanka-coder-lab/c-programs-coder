structure_display.c

  #include <stdio.h>

struct student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    struct student s = {1, "Priyanka", 85.5};

    printf("Roll = %d\n", s.roll);
    printf("Name = %s\n", s.name);
    printf("Marks = %.2f", s.marks);

    return 0;
}

structure_input.c

  #include <stdio.h>

struct student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    struct student s;

    printf("Enter roll: ");
    scanf("%d", &s.roll);

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\nStudent Details:\n");
    printf("Roll = %d\n", s.roll);
    printf("Name = %s\n", s.name);
    printf("Marks = %.2f", s.marks);

    return 0;
}


structure_array.c

  #include <stdio.h>

struct student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    struct student s[2];
    int i;

    for(i = 0; i < 2; i++) {
        printf("Enter roll, name, marks:\n");
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
    }

    for(i = 0; i < 2; i++) {
        printf("\nRoll = %d\n", s[i].roll);
        printf("Name = %s\n", s[i].name);
        printf("Marks = %.2f\n", s[i].marks);
    }

    return 0;
}


  

  
