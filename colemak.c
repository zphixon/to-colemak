#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "linenoise/linenoise.h"

void to_colemak(char* qwerty);

int main(int argc, char* argv[])
{
    char* input;
    char* test = "";
    int i, counting;

    if (argc == 2 && !strcmp(argv[1], "--count"))
        counting = 1;
    else
        counting = 0;

    while ((input = linenoise("")) != NULL) {

        test = malloc(sizeof(input) * strlen(input));
        strcpy(test, input);

        to_colemak(test);

        if (counting) {
            i = 0;
            while (strcmp(test, input)) {
                to_colemak(test);
                ++i;
            }

            to_colemak(test);
            printf("%s\t->\t%s\t%d steps\n", input, test, i);
        } else {
            printf("%s\n", test);
        }

        linenoiseFree(input);
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
