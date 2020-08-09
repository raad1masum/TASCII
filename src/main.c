#include <stdio.h>
#include <string.h>

void tascii_letter(char letter, int n);

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; ++i) {
        for (int j = 0; j < strlen(argv[i]); ++ j) {
            char letter = argv[i][j];
            tascii_letter(letter,1);
        }
        printf("\n");
        for (int j = 0; j < strlen(argv[i]); ++ j) {
            char letter = argv[i][j];
            tascii_letter(letter,2);
        }
        printf("\n");
        for (int j = 0; j < strlen(argv[i]); ++ j) {
            char letter = argv[i][j];
            tascii_letter(letter,3);
        }
        printf("\n");
        for (int j = 0; j < strlen(argv[i]); ++ j) {
            char letter = argv[i][j];
            tascii_letter(letter,4);
        }
        printf("\n");
        for (int j = 0; j < strlen(argv[i]); ++ j) {
            char letter = argv[i][j];
            tascii_letter(letter,5);
        }
        printf("\n");
    }

    return 0;
}

void tascii_letter(char letter, int n) {
    switch (letter) {
        case 'A':
            if (n == 1) { printf(" █████     "); }
            if (n == 2) { printf("██   ██    "); }
            if (n == 3) { printf("███████    "); }
            if (n == 4) { printf("██   ██    "); }
            if (n == 5) { printf("██   ██    "); }
            break;
        case 'B':
            if (n == 1) { printf("██████     "); }
            if (n == 2) { printf("██   ██    "); }
            if (n == 3) { printf("██████     "); }
            if (n == 4) { printf("██   ██    ");}
            if (n == 5) { printf("██████     "); }
            break;
        case 'C':
            if (n == 1) { printf(" ██████    "); }
            if (n == 2) { printf("██         "); }
            if (n == 3) { printf("██         "); }
            if (n == 4) { printf("██         "); }
            if (n == 5) { printf(" ██████    "); }
            break;
        case 'D':
            if (n == 1) { printf("██████     "); }
            if (n == 2) { printf("██   ██    "); }
            if (n == 3) { printf("██   ██    "); }
            if (n == 4) { printf("██   ██    "); }
            if (n == 5) { printf("██████     "); }
            break;
        case 'E':
            if (n == 1) { printf("███████    "); }
            if (n == 2) { printf("██         "); }
            if (n == 3) { printf("█████      "); }
            if (n == 4) { printf("██         "); }
            if (n == 5) { printf("███████    "); }
            break;
        case 'F':
            if (n == 1) { printf("███████    "); }
            if (n == 2) { printf("██         "); }
            if (n == 3) { printf("█████      "); }
            if (n == 4) { printf("██         "); }
            if (n == 5) { printf("██         "); }
            break;
        case 'G':
            if (n == 1) { printf(" ██████    "); }
            if (n == 2) { printf("██         "); }
            if (n == 3) { printf("██   ███   "); }
            if (n == 4) { printf("██    ██   "); }
            if (n == 5) { printf(" ██████    "); }
            break;
        case 'H':
            if (n == 1) { printf("██   ██    "); }
            if (n == 2) { printf("██   ██    "); }
            if (n == 3) { printf("███████    "); }
            if (n == 4) { printf("██   ██    "); }
            if (n == 5) { printf("██   ██    "); }
            break;
        case 'I':
            if (n == 1) { printf("██         "); }
            if (n == 2) { printf("██         "); }
            if (n == 3) { printf("██         "); }
            if (n == 4) { printf("██         "); }
            if (n == 5) { printf("██         "); }
            break;
        case 'J':
            if (n == 1) { printf("     ██    "); }
            if (n == 2) { printf("     ██    "); }
            if (n == 3) { printf("     ██    "); }
            if (n == 4) { printf("██   ██    "); }
            if (n == 5) { printf(" █████     "); }
            break;
        case 'K':
            if (n == 1) { printf("██   ██    "); }
            if (n == 2) { printf("██  ██     "); }
            if (n == 3) { printf("█████      "); }
            if (n == 4) { printf("██  ██     "); }
            if (n == 5) { printf("██   ██    "); }
            break;
        case 'L':
            if (n == 1) { printf("██         "); }
            if (n == 2) { printf("██         "); }
            if (n == 3) { printf("██         "); }
            if (n == 4) { printf("██         "); }
            if (n == 5) { printf("███████    "); }
            break;
        case 'M':
            if (n == 1) { printf("███    ███ "); }
            if (n == 2) { printf("████  ████ "); }
            if (n == 3) { printf("██ ████ ██ "); }
            if (n == 4) { printf("██  ██  ██ "); }
            if (n == 5) { printf("██      ██ "); }
            break;
        case 'N':
            if (n == 1) { printf("███    ██  "); }
            if (n == 2) { printf("████   ██  "); }
            if (n == 3) { printf("██ ██  ██  "); }
            if (n == 4) { printf("██  ██ ██  "); }
            if (n == 5) { printf("██   ████  "); }
            break;
        case 'O':
            if (n == 1) { printf(" ██████    "); }
            if (n == 2) { printf("██    ██   "); }
            if (n == 3) { printf("██    ██   "); }
            if (n == 4) { printf("██    ██   "); }
            if (n == 5) { printf(" ██████    "); }
            break;
        case 'P':
            if (n == 1) { printf("██████     "); }
            if (n == 2) { printf("██   ██    "); }
            if (n == 3) { printf("██████     "); }
            if (n == 4) { printf("██         "); }
            if (n == 5) { printf("██         "); }
            break;
        case 'Q':
            if (n == 1) { printf(" ██████    "); }
            if (n == 2) { printf("██    ██   "); }
            if (n == 3) { printf("██    ██   "); }
            if (n == 4) { printf("██ ▄▄ ██   "); }
            if (n == 5) { printf(" ██████    "); }
            printf("           ");
            break;
        case 'R':
            if (n == 1) { printf("██████     "); }
            if (n == 2) { printf("██   ██    "); }
            if (n == 3) { printf("██████     "); }
            if (n == 4) { printf("██   ██    "); }
            if (n == 5) { printf("██   ██    "); }
            break;
        case 'S':
            if (n == 1) { printf("███████    "); }
            if (n == 2) { printf("██         "); }
            if (n == 3) { printf("███████    "); }
            if (n == 4) { printf("     ██    "); }
            if (n == 5) { printf("███████    "); }
            break;
        case 'T':
            if (n == 1) { printf("████████   "); }
            if (n == 2) { printf("   ██      "); }
            if (n == 3) { printf("   ██      "); }
            if (n == 4) { printf("   ██      "); }
            if (n == 5) { printf("   ██      "); }
            break;
        case 'U':
            if (n == 1) { printf("██    ██   "); }
            if (n == 2) { printf("██    ██   "); }
            if (n == 3) { printf("██    ██   "); }
            if (n == 4) { printf("██    ██   "); }
            if (n == 5) { printf(" ██████    "); }
            break;
        case 'V':
            if (n == 1) { printf("██    ██   "); }
            if (n == 2) { printf("██    ██   "); }
            if (n == 3) { printf("██    ██   "); }
            if (n == 4) { printf(" ██  ██    "); }
            if (n == 5) { printf("  ████     "); }
            break;
        case 'W':
            if (n == 1) { printf("██     ██  "); }
            if (n == 2) { printf("██     ██  "); }
            if (n == 3) { printf("██  █  ██  "); }
            if (n == 4) { printf("██ ███ ██  "); }
            if (n == 5) { printf(" ███ ███   "); }
            break;
        case 'X':
            if (n == 1) { printf("██   ██    "); }
            if (n == 2) { printf(" ██ ██     "); }
            if (n == 3) { printf("  ███      "); }
            if (n == 4) { printf(" ██ ██     "); }
            if (n == 5) { printf("██   ██    "); }
            break;
        case 'Y':
            if (n == 1) { printf("██    ██   "); }
            if (n == 2) { printf(" ██  ██    "); }
            if (n == 3) { printf("  ████     "); }
            if (n == 4) { printf("   ██      "); }
            if (n == 5) { printf("   ██      "); }
            break;
        case 'Z':
            if (n == 1) { printf("███████    "); }
            if (n == 2) { printf("   ███     "); }
            if (n == 3) { printf("  ███      "); }
            if (n == 4) { printf(" ███       "); }
            if (n == 5) { printf("███████    "); }
            break;
        case 'a':
            if (n == 1) { printf(" █████     "); }
            if (n == 2) { printf("██   ██    "); }
            if (n == 3) { printf("███████    "); }
            if (n == 4) { printf("██   ██    "); }
            if (n == 5) { printf("██   ██    "); }
            break;
        case 'b':
            if (n == 1) { printf("██████     "); }
            if (n == 2) { printf("██   ██    "); }
            if (n == 3) { printf("██████     "); }
            if (n == 4) { printf("██   ██    ");}
            if (n == 5) { printf("██████     "); }
            break;
        case 'c':
            if (n == 1) { printf(" ██████    "); }
            if (n == 2) { printf("██         "); }
            if (n == 3) { printf("██         "); }
            if (n == 4) { printf("██         "); }
            if (n == 5) { printf(" ██████    "); }
            break;
        case 'd':
            if (n == 1) { printf("██████     "); }
            if (n == 2) { printf("██   ██    "); }
            if (n == 3) { printf("██   ██    "); }
            if (n == 4) { printf("██   ██    "); }
            if (n == 5) { printf("██████     "); }
            break;
        case 'e':
            if (n == 1) { printf("███████    "); }
            if (n == 2) { printf("██         "); }
            if (n == 3) { printf("█████      "); }
            if (n == 4) { printf("██         "); }
            if (n == 5) { printf("███████    "); }
            break;
        case 'f':
            if (n == 1) { printf("███████    "); }
            if (n == 2) { printf("██         "); }
            if (n == 3) { printf("█████      "); }
            if (n == 4) { printf("██         "); }
            if (n == 5) { printf("██         "); }
            break;
        case 'g':
            if (n == 1) { printf(" ██████    "); }
            if (n == 2) { printf("██         "); }
            if (n == 3) { printf("██   ███   "); }
            if (n == 4) { printf("██    ██   "); }
            if (n == 5) { printf(" ██████    "); }
            break;
        case 'h':
            if (n == 1) { printf("██   ██    "); }
            if (n == 2) { printf("██   ██    "); }
            if (n == 3) { printf("███████    "); }
            if (n == 4) { printf("██   ██    "); }
            if (n == 5) { printf("██   ██    "); }
            break;
        case 'i':
            if (n == 1) { printf("██         "); }
            if (n == 2) { printf("██         "); }
            if (n == 3) { printf("██         "); }
            if (n == 4) { printf("██         "); }
            if (n == 5) { printf("██         "); }
            break;
        case 'j':
            if (n == 1) { printf("     ██    "); }
            if (n == 2) { printf("     ██    "); }
            if (n == 3) { printf("     ██    "); }
            if (n == 4) { printf("██   ██    "); }
            if (n == 5) { printf(" █████     "); }
            break;
        case 'k':
            if (n == 1) { printf("██   ██    "); }
            if (n == 2) { printf("██  ██     "); }
            if (n == 3) { printf("█████      "); }
            if (n == 4) { printf("██  ██     "); }
            if (n == 5) { printf("██   ██    "); }
            break;
        case 'l':
            if (n == 1) { printf("██         "); }
            if (n == 2) { printf("██         "); }
            if (n == 3) { printf("██         "); }
            if (n == 4) { printf("██         "); }
            if (n == 5) { printf("███████    "); }
            break;
        case 'm':
            if (n == 1) { printf("███    ███ "); }
            if (n == 2) { printf("████  ████ "); }
            if (n == 3) { printf("██ ████ ██ "); }
            if (n == 4) { printf("██  ██  ██ "); }
            if (n == 5) { printf("██      ██ "); }
            break;
        case 'n':
            if (n == 1) { printf("███    ██  "); }
            if (n == 2) { printf("████   ██  "); }
            if (n == 3) { printf("██ ██  ██  "); }
            if (n == 4) { printf("██  ██ ██  "); }
            if (n == 5) { printf("██   ████  "); }
            break;
        case 'o':
            if (n == 1) { printf(" ██████    "); }
            if (n == 2) { printf("██    ██   "); }
            if (n == 3) { printf("██    ██   "); }
            if (n == 4) { printf("██    ██   "); }
            if (n == 5) { printf(" ██████    "); }
            break;
        case 'p':
            if (n == 1) { printf("██████     "); }
            if (n == 2) { printf("██   ██    "); }
            if (n == 3) { printf("██████     "); }
            if (n == 4) { printf("██         "); }
            if (n == 5) { printf("██         "); }
            break;
        case 'q':
            if (n == 1) { printf(" ██████    "); }
            if (n == 2) { printf("██    ██   "); }
            if (n == 3) { printf("██    ██   "); }
            if (n == 4) { printf("██ ▄▄ ██   "); }
            if (n == 5) { printf(" ██████    "); }
            printf("           ");
            break;
        case 'r':
            if (n == 1) { printf("██████     "); }
            if (n == 2) { printf("██   ██    "); }
            if (n == 3) { printf("██████     "); }
            if (n == 4) { printf("██   ██    "); }
            if (n == 5) { printf("██   ██    "); }
            break;
        case 's':
            if (n == 1) { printf("███████    "); }
            if (n == 2) { printf("██         "); }
            if (n == 3) { printf("███████    "); }
            if (n == 4) { printf("     ██    "); }
            if (n == 5) { printf("███████    "); }
            break;
        case 't':
            if (n == 1) { printf("████████   "); }
            if (n == 2) { printf("   ██      "); }
            if (n == 3) { printf("   ██      "); }
            if (n == 4) { printf("   ██      "); }
            if (n == 5) { printf("   ██      "); }
            break;
        case 'u':
            if (n == 1) { printf("██    ██   "); }
            if (n == 2) { printf("██    ██   "); }
            if (n == 3) { printf("██    ██   "); }
            if (n == 4) { printf("██    ██   "); }
            if (n == 5) { printf(" ██████    "); }
            break;
        case 'v':
            if (n == 1) { printf("██    ██   "); }
            if (n == 2) { printf("██    ██   "); }
            if (n == 3) { printf("██    ██   "); }
            if (n == 4) { printf(" ██  ██    "); }
            if (n == 5) { printf("  ████     "); }
            break;
        case 'w':
            if (n == 1) { printf("██     ██  "); }
            if (n == 2) { printf("██     ██  "); }
            if (n == 3) { printf("██  █  ██  "); }
            if (n == 4) { printf("██ ███ ██  "); }
            if (n == 5) { printf(" ███ ███   "); }
            break;
        case 'x':
            if (n == 1) { printf("██   ██    "); }
            if (n == 2) { printf(" ██ ██     "); }
            if (n == 3) { printf("  ███      "); }
            if (n == 4) { printf(" ██ ██     "); }
            if (n == 5) { printf("██   ██    "); }
            break;
        case 'y':
            if (n == 1) { printf("██    ██   "); }
            if (n == 2) { printf(" ██  ██    "); }
            if (n == 3) { printf("  ████     "); }
            if (n == 4) { printf("   ██      "); }
            if (n == 5) { printf("   ██      "); }
            break;
        case 'z':
            if (n == 1) { printf("███████    "); }
            if (n == 2) { printf("   ███     "); }
            if (n == 3) { printf("  ███      "); }
            if (n == 4) { printf(" ███       "); }
            if (n == 5) { printf("███████    "); }
            break;
        default:
            printf("INVALID CHARACTER\n");
            break;
    }
}
