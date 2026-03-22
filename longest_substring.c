#include <stdio.h>
#include <string.h>

int longestSubstring(char str[]) {
    int n = strlen(str);
    int maxLength = 0;

    int visited[256];

    for (int i = 0; i < 256; i++)
        visited[i] = -1;

    int start = 0;

    for (int i = 0; i < n; i++) {
        if (visited[str[i]] >= start) {
            start = visited[str[i]] + 1;
        }

        visited[str[i]] = i;

        int length = i - start + 1;

        if (length > maxLength) {
            maxLength = length;
        }
    }

    return maxLength;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int result = longestSubstring(str);

    printf("Length of longest substring without repeating characters: %d", result);

    return 0;
}