#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int);

int main(int argc, char * argv[]){
  int ch;
  int ch_prev;
  while ((ch = getchar()) != EOF) {
    if (!(isalpha(ch) || ch == '>' || ch == '<' || ch == '/')){
    	if(ch == '<'|| ch == '/'){
    		ch_prev = ch;
		}else if(isalpha(ch)){
            if(ch_prev != '/'){
            	push(ch);
			}else if(pop() != ch){
                printf("NOT Valid");
                exit(1);
            }
        }
	}
	}		

	int stackVal = isEmpty();
	if(stackVal == 1){
		printf("Not Valid");
	}else{
		printf("Valid");
		exit(0);
	}
}
