#include <stdio.h>
#include <math.h>

int main() {
    int n, i, isPrime=1;

    scanf("%d",&n);

    printf("Square Root: %.2f\n", sqrt(n));
    printf("Square: %d\n", n*n);
    printf("Cube: %d\n", n*n*n);

    for(i=2;i<=n/2;i++)
        if(n%i==0) isPrime=0;

    if(isPrime && n>1) printf("Prime\n");
    else printf("Not Prime\n");

    int fact=1;
    for(i=1;i<=n;i++) fact*=i;
    printf("Factorial: %d\n",fact);

    printf("Prime Factors: ");
    for(i=2;i<=n;i++) {
        while(n%i==0) {
            printf("%d ",i);
            n/=i;
        }
    }
    return 0;
}