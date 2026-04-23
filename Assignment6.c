#include <stdio.h>

int fact(int n) {
    if(n == 0) return 1;
    return n * fact(n - 1);
}

int main() {
    int n, i;
    long long f = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
        f *= i;

    printf("Factorial (loop) = %lld\n", f);
    printf("Factorial (recursion) = %d", fact(n));

    return 0;
}