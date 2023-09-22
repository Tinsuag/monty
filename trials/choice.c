#include "main.h"

int choice()
{
	int choice;

	while (1)
	{
		switch (choice)
		{
			case 1:
				push(void);
				break;
			case 2:
				pop(void);
				break;
			case 3:
				desplay(void);
				break;
			case 4:
				exit(0);

			default:
				print("\nInvalid choice",stderr);
		}
	}
}
