#include "monty.h"

int main(int ac, char **argv)
{
    char *prompt = ":) ";
    size_t n = 0;
    char *lineptr;
    (void)ac, (void)argv;

    printf("%s", prompt);
    getline(&lineptr, &n, stdin);
    printf("%s\n", lineptr);
    
    free(lineptr);
    return (0);
}