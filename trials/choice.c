#include "main.h"

char choice(char *command, int d)
{
	while (1)
	{
		switch (command)
		{
			case "push":
				push(d);
				break;
			case "pop":
				pop(void);
				break;
			case "pall":
				desplay(void);
				break;
			default:
				fprintf(stderr,"Invalid choice");
		}
	}
}
