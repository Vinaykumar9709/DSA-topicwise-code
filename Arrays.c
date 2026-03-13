#include <stdio.h>

int main() {
    int arr[2];
    int sum;

    printf("Enter two numbers:\n");
    
    for(int i = 0; i < 2; i++) {
        scanf("%d", &arr[i]);
    }

    sum = arr[0] + arr[1];

    printf("Sum of two numbers = %d", sum);

    return 0;
}