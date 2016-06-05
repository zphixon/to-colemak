#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

void to_colemak(char* qwerty);

int main()
{
    char* input;
    char* test = "";
    int i;
    int size_di = 0;
    int size_dt = 0;

    for (;;) {
        input = readline("");

        if (!input)
            break;

        test = malloc(sizeof(input));
        strcpy(test, input);

        size_di = strlen(input);
        size_dt = strlen(test);

        to_colemak(test);

        i = 0;
        while (strcmp(test, input)) {
            to_colemak(test);
            ++i;
        }

        to_colemak(test);
        printf("%s\t->\t%s\t%d steps\n", input, test, i);

        free(input);
        free(test);
    }

    return 0;
}

void to_colemak(char* qwerty)
{
    int i;
    for (i = 0; qwerty[i] != '\0'; ++i) {
        switch (qwerty[i]) {
            case 'e':
                qwerty[i] = 'f';
                break;
            case 'r':
                qwerty[i] = 'p';
                break;
            case 't':
                qwerty[i] = 'g';
                break;
            case 'y':
                qwerty[i] = 'j';
                break;
            case 'u':
                qwerty[i] = 'l';
                break;
            case 'i':
                qwerty[i] = 'u';
                break;
            case 'o':
                qwerty[i] = 'y';
                break;
            case 'p':
                qwerty[i] = ';';
                break;
            case 's':
                qwerty[i] = 'r';
                break;
            case 'd':
                qwerty[i] = 's';
                break;
            case 'f':
                qwerty[i] = 't';
                break;
            case 'g':
                qwerty[i] = 'd';
                break;
            case 'j':
                qwerty[i] = 'n';
                break;
            case 'k':
                qwerty[i] = 'e';
                break;
            case 'l':
                qwerty[i] = 'i';
                break;
            case ';':
                qwerty[i] = 'o';
                break;
            case 'n':
                qwerty[i] = 'k';
                break;
            case 'E':
                qwerty[i] = 'F';
                break;
            case 'R':
                qwerty[i] = 'P';
                break;
            case 'T':
                qwerty[i] = 'G';
                break;
            case 'Y':
                qwerty[i] = 'J';
                break;
            case 'U':
                qwerty[i] = 'L';
                break;
            case 'I':
                qwerty[i] = 'U';
                break;
            case 'O':
                qwerty[i] = 'Y';
                break;
            case 'P':
                qwerty[i] = ':';
                break;
            case 'S':
                qwerty[i] = 'R';
                break;
            case 'D':
                qwerty[i] = 'S';
                break;
            case 'F':
                qwerty[i] = 'T';
                break;
            case 'G':
                qwerty[i] = 'D';
                break;
            case 'J':
                qwerty[i] = 'N';
                break;
            case 'K':
                qwerty[i] = 'E';
                break;
            case 'L':
                qwerty[i] = 'I';
                break;
            case ':':
                qwerty[i] = 'O';
                break;
            case 'N':
                qwerty[i] = 'k';
                break;
            default:
                break;
        }
    }
}
