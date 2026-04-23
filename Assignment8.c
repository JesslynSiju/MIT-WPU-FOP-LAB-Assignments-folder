#include <stdio.h>

int main() {
    int marks[5], i;
    float total = 0, avg;

    for(i=0;i<5;i++) {
        scanf("%d",&marks[i]);
        if(marks[i] < 40) {
            printf("Fail");
            return 0;
        }
        total += marks[i];
    }

    avg = total / 5;

    if(avg >= 75) printf("Distinction");
    else if(avg >= 60) printf("First Division");
    else if(avg >= 50) printf("Second Division");
    else printf("Third Division");

    return 0;
}