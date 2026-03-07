/*Program to Insert an Element in an Array*/

#include <stdio.h>

int main() {
    int arr[100], n, i, element, position;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position: ");
    scanf("%d", &position);

    for(i = n; i >= position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position - 1] = element;
    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}