#include <stdio.h>
#include <string.h>

void printLatinWord(char *word) {
    int len = strlen(word);
    for (int i = 1; i < len; i++) {
        printf("%c", word[i]);
    }
    printf("%cay ", word[0]);
}

int main(int argc, char *argv[]) {
    char phrase[100] = "the quick brown fox";
    char *word = strtok(phrase, " ");

    while (word != NULL) {
        printLatinWord(word);
        word = strtok(NULL, " ");
    }

    return 0;
}
