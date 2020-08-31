#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef enum { FALSE, TRUE } boolean;

extern char *  pop();
extern void push(char *);

extern void add(char *);
extern int getCount();
extern void _init_();

void append(char * output, char input){
    output = realloc(output, strlen(output)+1);

    output[strlen(output)] = input;
}

int main(int argc, char * argv[])
{
    int ch;
    char * input = malloc(sizeof(char *));
    boolean chbool = FALSE;
    _init_();
    while ((ch = getchar()) != '\n') {
        if(ch == '<')
            chbool = FALSE;
        else if(ch == '/') {
            chbool = TRUE;
            input = malloc(sizeof(char*));
        }
        else if(ch == '>'){
            if(chbool == TRUE && strcmp(pop(), input) != 0) {
                printf("NOT VALID");
                exit(1);
            }
            else if(chbool == FALSE) {
                push(input);
                add(input);
            }
            input = malloc(sizeof(char*));
        }
        else if(isalpha(ch))
            append(input, ch);
    }
    getCount();
    exit(0);
}
