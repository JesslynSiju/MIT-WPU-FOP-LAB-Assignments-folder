#include <stdio.h>
#include <string.h>

struct emp {
    char name[50], desig[50], gender;
    int day, month, year;
    float salary;
};

int main() {
    int n, i, male=0, female=0;
    printf("Enter number of employees: ");
    scanf("%d",&n);

    struct emp e[n];

    for(i=0;i<n;i++){
        printf("Enter name, designation, gender, date(dd mm yyyy), salary:\n");
        scanf("%s %s %c %d %d %d %f",
              e[i].name, e[i].desig, &e[i].gender,
              &e[i].day, &e[i].month, &e[i].year, &e[i].salary);
    }

    printf("Total Employees = %d\n", n);

    for(i=0;i<n;i++){
        if(e[i].gender=='M') male++;
        else if(e[i].gender=='F') female++;
    }

    printf("Male = %d Female = %d\n", male, female);

    printf("Salary > 10000:\n");
    for(i=0;i<n;i++)
        if(e[i].salary > 10000)
            printf("%s\n", e[i].name);

    printf("Asst Manager:\n");
    for(i=0;i<n;i++)
        if(strcmp(e[i].desig,"AsstManager")==0)
            printf("%s\n", e[i].name);

    return 0;
}