#include <stdio.h>
#include <string.h>

#define MAX_STRING_SIZE 999999999999999

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; ++i) {
        for (int j = 0; j < strlen(argv[i]); ++ j) {
            char letter = argv[i][j];
            printf("%c\n", letter);
        }
    }

    return 0;
}
