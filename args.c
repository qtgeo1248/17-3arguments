#include "args.h"

char **parse_args(char *line) {
    char *token;
    char **tokens;
    int i = 0;

    while (line != NULL) {
        token = strsep(&line, " ");
        tokens[i] = token;
        i++;
    }
    tokens[i] = 0;
    return tokens;
}
