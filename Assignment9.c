#include <stdio.h>

int main() {
    int n, temp, r, sum = 0;

    printf("Enter number: ");
    scanf("%d",&n);

    temp = n;
    while(n > 0) {
        r = n % 10;
        sum += r*r*r;
        n /= 10;
    }

    if(sum == temp)
        printf("Armstrong Number");
    else
        printf("Not Armstrong");

    return 0;
}