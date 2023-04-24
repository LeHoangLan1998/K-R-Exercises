#include <stdio.h>

void reverse(char s[]);

int main() {

    int c;
    char line[1000];
    int currChar = 0;
    while ((c = getchar()) != EOF) {
        if (c != '\n')
            line[currChar] = c;
        else if (c == '\n') {
            reverse(line);
            currChar = 0;
            printf("%s\n", line);
            continue;
        }
        currChar++;
    }
    return 0;
}

void reverse(char s[]) {
    int length = 0;

    while (s[length] != '\0') {
        length++;
    }

    for (int i = 0; i < length/2; i++) {
        char temp = s[i];
        s[i] = s[length - (i+1)];
        s[length - (i+1)] = temp;
    }
}