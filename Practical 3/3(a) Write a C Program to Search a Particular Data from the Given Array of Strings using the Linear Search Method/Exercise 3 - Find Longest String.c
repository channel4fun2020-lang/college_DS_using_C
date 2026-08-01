#include <stdio.h>
#include <string.h>

int main()
{
    char str[100][50];
    int n, i;
    char longest[50];

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%s", str[i]);

    strcpy(longest, str[0]);

    for(i = 1; i < n; i++)
    {
        if(strlen(str[i]) > strlen(longest))
            strcpy(longest, str[i]);
    }

    printf("Longest String = %s", longest);

    return 0;
}
