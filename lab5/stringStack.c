#include <stdio.h>
#include <stdlib.h>
#include <string.h>



static int top = 0;
static char * stack[100];


char *  pop()
{
  char * hold;
    if(top != 0){
        hold = malloc(strlen(stack[top - 1]));
        strcpy(hold, stack[top-1]);
        free(stack[top-1]);
        top--;
        return hold;
    }
    fprintf(stderr, "stack is empty");
    return NULL;
}


void push(char * thing2push)
{
	if(top < 100) {
        stack[top] = malloc(strlen(thing2push));
        strcpy(stack[top], thing2push);
        top++;
    }
    else
        fprintf(stderr, "stack is full");
	
}


int isEmpty()
{
  return top-1;
}
