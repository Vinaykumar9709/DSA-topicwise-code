#include <stdio.h>
#include <string.h>

void longestPalindrome(char str[]) {
    int n = strlen(str);
    int start = 0, maxLength = 1;

    for (int i = 0; i < n; i++) {

        // Odd length palindrome
        int left = i, right = i;
        while (left >= 0 && right < n && str[left] == str[right]) {
            if (right - left + 1 > maxLength) {
                start = left;
                maxLength = right - left + 1;
            }
            left--;
            right++;
        }

        // Even length palindrome
        left = i;
        right = i + 1;
        while (left >= 0 && right < n && str[left] == str[right]) {
            if (right - left + 1 > maxLength) {
                start = left;
                maxLength = right - left + 1;
            }
            left--;
            right++;
        }
    }

    printf("Longest Palindromic Substring: ");
    for (int i = start; i < start + maxLength; i++) {
        printf("%c", str[i]);
    }
}

int main() {
    char str[] = "babad";

    longestPalindrome(str);

    return 0;
}