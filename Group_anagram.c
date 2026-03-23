#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

// Function to sort characters in string
void sortString(char str[]) {
    int i, j;
    char temp;

    int len = strlen(str);

    for(i = 0; i < len - 1; i++) {
        for(j = i + 1; j < len; j++) {
            if(str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char words[MAX][20] = {
        "eat", "tea", "tan", "ate", "nat", "bat"
    };

    int n = 6;
    int visited[MAX] = {0};

    for(int i = 0; i < n; i++) {

        if(visited[i])
            continue;

        char sorted1[20];
        strcpy(sorted1, words[i]);
        sortString(sorted1);

        printf("Group: %s ", words[i]);
        visited[i] = 1;

        for(int j = i + 1; j < n; j++) {

            if(visited[j])
                continue;

            char sorted2[20];
            strcpy(sorted2, words[j]);
            sortString(sorted2);

            if(strcmp(sorted1, sorted2) == 0) {
                printf("%s ", words[j]);
                visited[j] = 1;
            }
        }

        printf("\n");
    }

    return 0;
}