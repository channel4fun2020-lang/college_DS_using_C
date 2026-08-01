#include <stdio.h>
#include <string.h>

int main()
{
    char str[100][50], key[50];
    int n, i, count = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%s", str[i]);

    scanf("%s", key);

    for(i = 0; i < n; i++)
    {
        count++;
        if(strcmp(str[i], key) == 0)
            break;
    }

    printf("Comparisons = %d", count);

    return 0;
}
