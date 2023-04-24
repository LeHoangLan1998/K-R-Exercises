#include <stdio.h>

    int main() {
    int c, maxLength, characters[26];

    // initialising the int default values
    for (int i = 0; i < 26; i++)
        characters[i] = 0;

    maxLength = 0;
    //----------------------------------

    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z')
            ++characters[c - 'a'];
        else if (c >= 'A' && c <= 'Z')
            ++characters[c - 'A'];
    }

    for (int i = 0; i < 26; i++) {
        if (characters[i] > maxLength)
            maxLength = characters[i];
    }

    //printing output:
    printf("\n");
    while (maxLength > 0) {
        for (int i = 0; i < 26; i++) {
            if (characters[i] >= maxLength) {
                printf(" | ");
            }
            else {
                printf("   ");
            }
        }
        printf("\n");
        --maxLength;
    }

    for (int j = 'a'; j <= 'z'; j++)
        printf(" %c ", j);

    printf("\n");

    return 0;
}