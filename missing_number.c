#include <stdio.h>

int findMissingNumber(int arr[], int n) {
    int total_sum = n * (n + 1) / 2;  // Sum from 0 to n
    int array_sum = 0;

    for (int i = 0; i < n; i++) {
        array_sum += arr[i];
    }

    return total_sum - array_sum;  // Missing number
}

int main() {
    int arr[] = {0, 1, 2, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int missing = findMissingNumber(arr, n);

    printf("Missing number is: %d\n", missing);

    return 0;
}