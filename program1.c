/*
#include<stdio.h>
typedef struct WORD{
    char *s;
    int index;
} WORD;
int main(){

    WORD word[];

    return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_INPUT_LENGTH 10001
#define MAX_WORDS 1000

struct WORD {
    char *s;
    int index;
};

void toLowerCase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}

int compareWords(const void *a, const void *b) {
    const struct WORD *wordA = (const struct WORD *)a;
    const struct WORD *wordB = (const struct WORD *)b;
    int cmp = strcmp(wordA->s, wordB->s);
    if (cmp == 0) {
        return wordA->index - wordB->index;
    }
    return cmp;
}

int main() {
    char input[MAX_INPUT_LENGTH];
    fgets(input, sizeof(input), stdin);

    // Check if input is empty
    if (strlen(input) == 0) {
        printf("<empty>\n");
        return 0;
    }

    struct WORD words[MAX_WORDS];
    int wordCount = 0;

    char *token = strtok(input, " \t\n");
    while (token != NULL && wordCount < MAX_WORDS) {
        words[wordCount].s = malloc(strlen(token) + 1);
        strcpy(words[wordCount].s, token);
        toLowerCase(words[wordCount].s);
        words[wordCount].index = wordCount;
        wordCount++;
        token = strtok(NULL, " \t\n");
    }

    // Sort the words
    qsort(words, wordCount, sizeof(struct WORD), compareWords);

    // Print the sorted words
    for (int i = 0; i < wordCount; i++) {
        printf("%s", words[i].s);
        if (i < wordCount - 1) {
            printf(",");
        }
    }
    printf("\n");

    // Print the indices
    for (int i = 0; i < wordCount; i++) {
        printf("%d", words[i].index);
        if (i < wordCount - 1) {
            printf(",");
        }
    }
    printf("\n");

    // Free allocated memory
    for (int i = 0; i < wordCount; i++) {
        free(words[i].s);
    }

    return 0;
}
