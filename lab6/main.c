#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int);
extern int isEmpty();

extern int heapDelete();
extern void addHeap(int);
extern int heapSize();
extern void printXML();

int main(int argc, char * argv[])
{
  int value;
  while (scanf("%d\n", &value) != EOF) {
    fprintf(stderr, "\nREADING INPUT: %d\n", value);
    addHeap(value);
    //
  }
  
  printf("\n\nXML representation:\n");
  printXML(1);
  
  
  
  printf("\n\n\nReverse sorted order (deleting from Heap):\n");
  while(heapSize() != 0){
  	int deletedItem = heapDelete();
  	push(deletedItem);
  	printf("\n%d", deletedItem);
  }
  
  printf("\n\n\nSorted order (popping from stack):\n");
  while(isEmpty() == 0){
  	printf("\n%d", pop());
  }
  
  
  
  
  
  
  exit(0);
}
