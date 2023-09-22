#include "main.h"

#define BUFLEN 100

int main( int argc, char **argv)
{
	char input[BUFLEN] = "Rey, Luke, Leia: Anakin, Padme";
	int i = 0;

	char *token = strtok(input, ",");
	printf("%d:[%p] --- %s\n", i, token, token);

	while( token != NULL)
	{
		token = strtok(NULL, ",");
		printf("%d: [%p] --- %s\n", i, token, token);
	}

}
