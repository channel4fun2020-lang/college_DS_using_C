#include <stdio.h>

int main() {
    int arr[100], n, i, choice, pos, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    do {
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter position: ");
                scanf("%d", &pos);
                printf("Enter element: ");
                scanf("%d", &element);

                for(i = n; i >= pos; i--)
                    arr[i] = arr[i - 1];

                arr[pos - 1] = element;
                n++;
                break;

            case 2:
                printf("Enter position: ");
                scanf("%d", &pos);

                for(i = pos - 1; i < n - 1; i++)
                    arr[i] = arr[i + 1];

                n--;
                break;

            case 3:
                printf("Array Elements: ");
                for(i = 0; i < n; i++)
                    printf("%d ", arr[i]);
                printf("\n");
                break;

            case 4:
                printf("Exiting...");
                break;

            default:
                printf("Invalid Choice!");
        }

    } while(choice != 4);

    return 0;
}
