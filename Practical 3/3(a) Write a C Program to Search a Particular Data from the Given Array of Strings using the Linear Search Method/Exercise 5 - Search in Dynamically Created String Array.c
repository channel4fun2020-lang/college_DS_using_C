#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char **str, key[50];
    int n, i, flag = 0;

    scanf("%d", &n);

    str = (char**)malloc(n * sizeof(char*));

    for(i = 0; i < n; i++)
    {
        str[i] = (char*)malloc(50 * sizeof(char));
        scanf("%s", str[i]);
    }

    scanf("%s", key);

    for(i = 0; i < n; i++)
    {
        if(strcmp(str[i], key) == 0)
        {
            printf("Found at position %d", i + 1);
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("Not Found");

    for(i = 0; i < n; i++)
        free(str[i]);
    free(str);

    return 0;
}
