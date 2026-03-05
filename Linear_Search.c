#include <stdio.h>

int main() {
    int arr[5] = {10,20,30,40,50};
    int i, key = 30, found = 0;

    for(i = 0; i < 5; i++) {
        if(arr[i] == key) {
            found = 1;
            printf("Element found at position %d", i+1);
            break;
        }
    }

    if(found == 0)
        printf("Element not found");

    return 0;
}