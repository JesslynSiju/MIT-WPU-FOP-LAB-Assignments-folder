#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[100];
    int i, len, flag = 0;

    printf("Enter string: ");
    scanf("%s", str1);

    len = strlen(str1);
    printf("Length = %d\n", len);

    strcpy(temp, str1);
    strrev(temp);
    printf("Reverse = %s\n", temp);

    printf("Enter another string: ");
    scanf("%s", str2);

    if(strcmp(str1, str2) == 0)
        printf("Equal\n");
    else
        printf("Not Equal\n");

    strcpy(temp, str1);
    strrev(temp);
    if(strcmp(str1, temp) == 0)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    if(strstr(str1, str2))
        printf("Substring Found\n");
    else
        printf("Substring Not Found\n");

    return 0;
}