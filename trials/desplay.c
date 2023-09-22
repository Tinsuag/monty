#include "monty.h"

void desplay(void)
{
	if (top == -1)
	{
		printf("Stack underflow\n");
	}
	else if (top > 0)
	{
		for (i = top; i >= 0; i--)
		{
			printf("%d", stack[i]);
		}
	}
}
