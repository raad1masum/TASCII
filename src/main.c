#include <stdio.h>
#include <string.h>

void tascii_letter(char letter);

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; ++i) {
        for (int j = 0; j < strlen(argv[i]); ++j) {
            char letter = argv[i][j];
            tascii_letter(letter);
        }
    }

    return 0;
}

void tascii_letter(char letter) {
    switch (letter) {
        case 'A':
            printf(" █████     \n");
            printf("██   ██    \n");
            printf("███████    \n");
            printf("██   ██    \n");
            printf("██   ██    \n");
            printf("           \n");
            break;
        case 'B':
            printf("           \n");
            printf("██████     \n");
            printf("██   ██    \n");
            printf("██████     \n");
            printf("██   ██    \n");
            printf("██████     \n");
            printf("           \n");
            break;
        case 'C':
            printf(" ██████    \n");
            printf("██         \n");
            printf("██         \n");
            printf("██         \n");
            printf(" ██████    \n");
            printf("           \n");
            break;
        case 'D':
            printf("██████     \n");
            printf("██   ██    \n");
            printf("██   ██    \n");
            printf("██   ██    \n");
            printf("██████     \n");
            printf("           \n");
            break;
        case 'E':
            printf("███████    \n");
            printf("██         \n");
            printf("█████      \n");
            printf("██         \n");
            printf("███████    \n");
            printf("           \n");
            break;
        case 'F':
            printf("███████    \n");
            printf("██         \n");
            printf("█████      \n");
            printf("██         \n");
            printf("██         \n");
            printf("           \n");
            break;
        case 'G':
            printf(" ██████    \n");
            printf("██         \n");
            printf("██   ███   \n");
            printf("██    ██   \n");
            printf(" ██████    \n");
            printf("           \n");
            break;
        case 'H':
            printf("██   ██    \n");
            printf("██   ██    \n");
            printf("███████    \n");
            printf("██   ██    \n");
            printf("██   ██    \n");
            printf("           \n");
            break;
        case 'I':
            printf("██         \n");
            printf("██         \n");
            printf("██         \n");
            printf("██         \n");
            printf("██         \n");
            printf("           \n");
            break;
        case 'J':
            printf("     ██    \n");
            printf("     ██    \n");
            printf("     ██    \n");
            printf("██   ██    \n");
            printf(" █████     \n");
            printf("           \n");
            break;
        case 'K':
            printf("██   ██    \n");
            printf("██  ██     \n");
            printf("█████      \n");
            printf("██  ██     \n");
            printf("██   ██    \n");
            printf("           \n");
            break;
        case 'L':
            printf("██         \n");
            printf("██         \n");
            printf("██         \n");
            printf("██         \n");
            printf("███████    \n");
            printf("           \n");
            break;
        case 'M':
            printf("███    ███ \n");
            printf("████  ████ \n");
            printf("██ ████ ██ \n");
            printf("██  ██  ██ \n");
            printf("██      ██ \n");
            printf("           \n");
            break;
        case 'N':
            printf("███    ██  \n");
            printf("████   ██  \n");
            printf("██ ██  ██  \n");
            printf("██  ██ ██  \n");
            printf("██   ████  \n");
            printf("           \n");
            break;
        case 'O':
            printf(" ██████    \n");
            printf("██    ██   \n");
            printf("██    ██   \n");
            printf("██    ██   \n");
            printf(" ██████    \n");
            printf("           \n");
            break;
        case 'P':
            printf("██████     \n");
            printf("██   ██    \n");
            printf("██████     \n");
            printf("██         \n");
            printf("██         \n");
            printf("           \n");
            break;
        case 'Q':
            printf(" ██████    \n");
            printf("██    ██   \n");
            printf("██    ██   \n");
            printf("██ ▄▄ ██   \n");
            printf(" ██████    \n");
            printf("    ▀▀     \n");
            printf("           \n");
            break;
        case 'R':
            printf("██████     \n");
            printf("██   ██    \n");
            printf("██████     \n");
            printf("██   ██    \n");
            printf("██   ██    \n");
            printf("           \n");
            break;
        case 'S':
            printf("███████    \n");
            printf("██         \n");
            printf("███████    \n");
            printf("     ██    \n");
            printf("███████    \n");
            printf("           \n");
            break;
        case 'T':
            printf("████████   \n");
            printf("   ██      \n");
            printf("   ██      \n");
            printf("   ██      \n");
            printf("   ██      \n");
            printf("           \n");
            break;
        case 'U':
            printf("██    ██   \n");
            printf("██    ██   \n");
            printf("██    ██   \n");
            printf("██    ██   \n");
            printf(" ██████    \n");
            printf("           \n");
            break;
        case 'V':
            printf("██    ██   \n");
            printf("██    ██   \n");
            printf("██    ██   \n");
            printf(" ██  ██    \n");
            printf("  ████     \n");
            printf("           \n");
            break;
        case 'W':
            printf("██     ██  \n");
            printf("██     ██  \n");
            printf("██  █  ██  \n");
            printf("██ ███ ██  \n");
            printf(" ███ ███   \n");
            printf("           \n");
            break;
        case 'X':
            printf("██   ██    \n");
            printf(" ██ ██     \n");
            printf("  ███      \n");
            printf(" ██ ██     \n");
            printf("██   ██    \n");
            printf("           \n");
            break;
        case 'Y':
            printf("██    ██   \n");
            printf(" ██  ██    \n");
            printf("  ████     \n");
            printf("   ██      \n");
            printf("   ██      \n");
            printf("           \n");
            break;
        case 'Z':
            printf("███████    \n");
            printf("   ███     \n");
            printf("  ███      \n");
            printf(" ███       \n");
            printf("███████    \n");
            printf("           \n");
            break;
        case 'a':
            printf(" █████     \n");
            printf("██   ██    \n");
            printf("███████    \n");
            printf("██   ██    \n");
            printf("██   ██    \n");
            printf("           \n");
            break;
        case 'b':
            printf("           \n");
            printf("██████     \n");
            printf("██   ██    \n");
            printf("██████     \n");
            printf("██   ██    \n");
            printf("██████     \n");
            printf("           \n");
            break;
        case 'c':
            printf(" ██████    \n");
            printf("██         \n");
            printf("██         \n");
            printf("██         \n");
            printf(" ██████    \n");
            printf("           \n");
            break;
        case 'd':
            printf("██████     \n");
            printf("██   ██    \n");
            printf("██   ██    \n");
            printf("██   ██    \n");
            printf("██████     \n");
            printf("           \n");
            break;
        case 'e':
            printf("███████    \n");
            printf("██         \n");
            printf("█████      \n");
            printf("██         \n");
            printf("███████    \n");
            printf("           \n");
            break;
        case 'f':
            printf("███████    \n");
            printf("██         \n");
            printf("█████      \n");
            printf("██         \n");
            printf("██         \n");
            printf("           \n");
            break;
        case 'g':
            printf(" ██████    \n");
            printf("██         \n");
            printf("██   ███   \n");
            printf("██    ██   \n");
            printf(" ██████    \n");
            printf("           \n");
            break;
        case 'h':
            printf("██   ██    \n");
            printf("██   ██    \n");
            printf("███████    \n");
            printf("██   ██    \n");
            printf("██   ██    \n");
            printf("           \n");
            break;
        case 'i':
            printf("██         \n");
            printf("██         \n");
            printf("██         \n");
            printf("██         \n");
            printf("██         \n");
            printf("           \n");
            break;
        case 'j':
            printf("     ██    \n");
            printf("     ██    \n");
            printf("     ██    \n");
            printf("██   ██    \n");
            printf(" █████     \n");
            printf("           \n");
            break;
        case 'k':
            printf("██   ██    \n");
            printf("██  ██     \n");
            printf("█████      \n");
            printf("██  ██     \n");
            printf("██   ██    \n");
            printf("           \n");
            break;
        case 'l':
            printf("██         \n");
            printf("██         \n");
            printf("██         \n");
            printf("██         \n");
            printf("███████    \n");
            printf("           \n");
            break;
        case 'm':
            printf("███    ███ \n");
            printf("████  ████ \n");
            printf("██ ████ ██ \n");
            printf("██  ██  ██ \n");
            printf("██      ██ \n");
            printf("           \n");
            break;
        case 'n':
            printf("███    ██  \n");
            printf("████   ██  \n");
            printf("██ ██  ██  \n");
            printf("██  ██ ██  \n");
            printf("██   ████  \n");
            printf("           \n");
            break;
        case 'o':
            printf(" ██████    \n");
            printf("██    ██   \n");
            printf("██    ██   \n");
            printf("██    ██   \n");
            printf(" ██████    \n");
            printf("           \n");
            break;
        case 'p':
            printf("██████     \n");
            printf("██   ██    \n");
            printf("██████     \n");
            printf("██         \n");
            printf("██         \n");
            printf("           \n");
            break;
        case 'q':
            printf(" ██████    \n");
            printf("██    ██   \n");
            printf("██    ██   \n");
            printf("██ ▄▄ ██   \n");
            printf(" ██████    \n");
            printf("    ▀▀     \n");
            printf("           \n");
            break;
        case 'r':
            printf("██████     \n");
            printf("██   ██    \n");
            printf("██████     \n");
            printf("██   ██    \n");
            printf("██   ██    \n");
            printf("           \n");
            break;
        case 's':
            printf("███████    \n");
            printf("██         \n");
            printf("███████    \n");
            printf("     ██    \n");
            printf("███████    \n");
            printf("           \n");
            break;
        case 't':
            printf("████████   \n");
            printf("   ██      \n");
            printf("   ██      \n");
            printf("   ██      \n");
            printf("   ██      \n");
            printf("           \n");
            break;
        case 'u':
            printf("██    ██   \n");
            printf("██    ██   \n");
            printf("██    ██   \n");
            printf("██    ██   \n");
            printf(" ██████    \n");
            printf("           \n");
            break;
        case 'v':
            printf("██    ██   \n");
            printf("██    ██   \n");
            printf("██    ██   \n");
            printf(" ██  ██    \n");
            printf("  ████     \n");
            printf("           \n");
            break;
        case 'w':
            printf("██     ██  \n");
            printf("██     ██  \n");
            printf("██  █  ██  \n");
            printf("██ ███ ██  \n");
            printf(" ███ ███   \n");
            printf("           \n");
            break;
        case 'x':
            printf("██   ██    \n");
            printf(" ██ ██     \n");
            printf("  ███      \n");
            printf(" ██ ██     \n");
            printf("██   ██    \n");
            printf("           \n");
            break;
        case 'y':
            printf("██    ██   \n");
            printf(" ██  ██    \n");
            printf("  ████     \n");
            printf("   ██      \n");
            printf("   ██      \n");
            printf("           \n");
            break;
        case 'z':
            printf("███████    \n");
            printf("   ███     \n");
            printf("  ███      \n");
            printf(" ███       \n");
            printf("███████    \n");
            printf("           \n");
            break;
        default:
            printf("INVALID CHARACTER\n");
            break;
    }
}
