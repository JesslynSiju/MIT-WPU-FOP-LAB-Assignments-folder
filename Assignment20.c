#include <stdio.h>

void swap_value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("After swap: %d %d\n", a, b);
}

void swap_ptr(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);

    swap_value(x, y);

    swap_ptr(&x, &y);
    printf("After swap %d %d\n", x, y);

    return 0;
}