#include  "monty.h"

void push(int element);
{
int stalk[LIMIT], top;
if (top == LIMIT - 1)
{
printf("stalk Overflow\n");
}
else
{
/*input your number entered to the stalk*/
top++;
if (isEmpty()) 
{
    n->prev = NULL;
    n->next = NULL;
    start = n;
    top = n;
}
else 
{
top->next = n;
n->next = NULL;
n->prev = top;
top = n;
}
}
}
