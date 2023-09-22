#include "monty.h"

int main(int ac, char **argv)
{
    char *prompt = ":) ";
    size_t n = 0;
    char *lineptr, command;
    (void)ac, (void)argv;

    while(1)
    {
        printf("%s", prompt);
        command = getline(&lineptr, &n, stdin);
        printf("%s", lineptr);
        if(command == -1)
            {
                printf("Exiting shell\n");
                return (-1);
            }

        
    }
    free(lineptr);
    return (0);
}