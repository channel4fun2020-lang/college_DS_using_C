#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    char ch;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    printf("\nLength of first string = %lu", strlen(str1));

    printf("\nComparison Result = %d", strcmp(str1, str2));

    strcpy(str2, str1);
    printf("\nAfter Copy = %s", str2);

    strcat(str1, str2);
    printf("After Concatenation = %s", str1);

    printf("Reverse = %s", strrev(str1));

    printf("Uppercase = %s", strupr(str1));

    printf("Lowercase = %s", strlwr(str1));

    printf("Enter character to search: ");
    scanf(" %c", &ch);

    if(strchr(str1, ch))
        printf("Character found.");
    else
        printf("Character not found.");

    return 0;
}
