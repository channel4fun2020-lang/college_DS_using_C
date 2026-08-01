#include <stdio.h>
#include <string.h>

int main()
{
    char str[100][50];
    int n, i;
    char shortest[50];

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%s", str[i]);

    strcpy(shortest, str[0]);

    for(i = 1; i < n; i++)
    {
        if(strlen(str[i]) < strlen(shortest))
            strcpy(shortest, str[i]);
    }

    printf("Shortest String = %s", shortest);

    return 0;
}
