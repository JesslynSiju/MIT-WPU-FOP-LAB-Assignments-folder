#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    int choice;

    printf("Enter string1: ");
    scanf("%s", s1);
    printf("Enter string2: ");
    scanf("%s", s2);

    printf("1.Length 2.Copy 3.Concat 4.Compare 5.Reverse\n");
    scanf("%d",&choice);

    switch(choice){
        case 1: printf("%lu", strlen(s1)); break;
        case 2: strcpy(s2, s1); printf("%s", s2); break;
        case 3: strcat(s1, s2); printf("%s", s1); break;
        case 4: printf("%d", strcmp(s1, s2)); break;
        case 5: printf("%s", strrev(s1)); break;
    }
    return 0;
}