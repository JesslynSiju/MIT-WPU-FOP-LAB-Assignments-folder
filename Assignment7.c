#include <stdio.h>

struct student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct student s[n];

    for(i = 0; i < n; i++) {
        printf("Enter roll, name, marks:\n");
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
    }

    printf("\nStudent Details:\n");
    for(i = 0; i < n; i++) {
        printf("Roll: %d Name: %s Marks: %.2f\n", s[i].roll, s[i].name, s[i].marks);
    }

    return 0;
}