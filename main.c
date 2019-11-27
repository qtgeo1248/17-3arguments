#include "args.h"

int main(int argc, char *arbv[]) {
    char *test;
    char buf[1000];
    printf("Please input a program:\n");
    fgets(buf, 1000, stdin);
    buf[strlen(buf) - 1] = 0;
    test = buf;
    char **args = parse_args(test);
    execvp(args[0], args);
    return 0;
}
