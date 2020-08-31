#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

/**
 *  The functions in this module implement a Heapdata structure
 *  of integers.
 */


/**
 * heapDelete() removes the biggest integer in the heap and returns it.
 *
 */
 
int heap[100];

int heapDelete()
{
	int i, index, deletedNode;
	for(i = 1; i < (sizeof(heap)/sizeof(heap[0])); i++){
		if(heap[i] == 0){
			deletedNode = heap[1];
			heap[1] = heap[i-1];
			heap[i-1] = 0;
			index = i-1;
			break;
		}
	}
	
	int startIndex = 1;
	int leftChildIndex = (2*startIndex);
	int rightChildIndex = (2*startIndex + 1);
	int k, temp;
	for(k = 0; k < index; k++){
		if(heap[rightChildIndex] > heap[leftChildIndex]){
			if(heap[rightChildIndex] > heap[startIndex]){
				temp = heap[rightChildIndex];
				heap[rightChildIndex] = heap[startIndex];
				heap[startIndex] = temp;
				
			}
		}else if(heap[leftChildIndex] > heap[rightChildIndex]){
			if(heap[leftChildIndex] > heap[startIndex]){
				temp = heap[leftChildIndex];
				heap[leftChildIndex] = heap[startIndex];
				heap[startIndex] = temp;
			}
		}	
		startIndex++;
		leftChildIndex = (2*startIndex);
		rightChildIndex = (2*startIndex + 1);
	}
	return deletedNode;
}

/**
 *  addHeap(thing2add) adds the "thing2add" to the Heap.
 *
 */
void addHeap(int thing2add){
	int i, index;
	for(i = 1; i < (sizeof(heap)/sizeof(heap[0])); i++){
		if(heap[i] == 0){
			heap[i] = thing2add;
			index = i;
			break;
		}
	}
	
	
	int k, temp;
	int parentIndex = floor((double)index/2);
	int childIndex = index;
	for(k = 1; k < (floor(log2(index))+1); k++){
		if(heap[parentIndex] < heap[childIndex]){
			temp = heap[childIndex];
			heap[childIndex] = heap[parentIndex];
			heap[parentIndex] = temp;
			
		}
		childIndex = parentIndex;
		parentIndex = floor((double)childIndex/2);
		
		
	}

}

/**
 * heapSize() returns the number of items in the Heap.
 *
 */
int heapSize()
{
	int i, numberOfNodes;
	for(i = 1; i < (sizeof(heap)/sizeof(heap[0])); i++){
		if(heap[i] == 0){
			numberOfNodes = i-1;
			break;
		}
	}
  return numberOfNodes;
}


void printXML(int parentNode){

	printf("<node id='%d'>", heap[parentNode]);
	if((2*parentNode) < (heapSize()+1)){
		printXML((2*parentNode));
	}
	
	if(((2*parentNode)+1)  < (heapSize()+1)){
		printXML(((2*parentNode)+1));
	}

	printf("</node>");
}
