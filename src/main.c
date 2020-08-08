#include <stdio.h>
#include <string.h>

void tascii_letter(char letter);

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; ++i) {
        for (int j = 0; j < strlen(argv[i]); ++ j) {
            char letter = argv[i][j];

            tascii_letter(letter);
        }
    }

    return 0;
}

void tascii_letter(char letter) {
    printf("%c\n", letter);
}
