#include <stdio.h>

int main() {
    int a, b, i, gcd;

    scanf("%d%d",&a,&b);

    for(i=1;i<=a && i<=b;i++)
        if(a%i==0 && b%i==0)
            gcd = i;

    printf("GCD = %d\n",gcd);

    for(i=2;i<=a;i++)
        if(a%i==0) {
            printf("Smallest Divisor = %d",i);
            break;
        }

    return 0;
}