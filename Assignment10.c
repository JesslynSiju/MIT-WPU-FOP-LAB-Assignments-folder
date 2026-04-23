#include <stdio.h>
#include <math.h>

int main() {
    int choice, n, i;
    float a, b, result=1;

    printf("1.Add 2.Sub 3.Mul 4.Div 5.Power 6.Factorial\n");
    scanf("%d",&choice);

    if(choice <= 4) {
        scanf("%f%f",&a,&b);
    }

    switch(choice) {
        case 1: printf("%.2f",a+b); break;
        case 2: printf("%.2f",a-b); break;
        case 3: printf("%.2f",a*b); break;
        case 4: printf("%.2f",a/b); break;
        case 5:
            scanf("%f%f",&a,&b);
            printf("%.2f",pow(a,b));
            break;
        case 6:
            scanf("%d",&n);
            for(i=1;i<=n;i++) result*=i;
            printf("%.0f",result);
            break;
    }
    return 0;
}