#include "mySort.h"
#include <stdio.h>
void merge(int array[], int first, int mid, int last){ 
    int i, j, k; 
    int n1 = mid - first + 1; 
    int n2 =  last - mid; 
    int L[n1], R[n2]; 
    for (i = 0; i < n1; i++)
    	myCopy(&array[first + i], &L[i]);
    for (j = 0; j < n2; j++)
    	myCopy(&array[mid + 1 + j], &R[j]);
    i = 0;
    j = 0;
    k = first;
    while ((myCompare(i, n1) < 0) && (myCompare(j, n2) < 0)){ 
        if (myCompare(L[i], R[j]) <= 0) 
        { 
            myCopy(&L[i], &array[k]);
            i++;
			
        } 
        else
        { 
            myCopy(&R[j], &array[k]);
            j++; 
        } 
        k++; 
    } 
    while (myCompare(i, n1) < 0) 
    { 
		myCopy(&L[i],&array[k]);
        i++; 
        k++; 
    } 
  
    while (myCompare(j, n2) < 0) 
    { 
        myCopy(&R[j],&array[k]);
        j++; 
        k++; 
    } 
}
void mySort(int array[], unsigned int first, unsigned int last){
    	if (first < last){ 
        int mid = first+(last-first)/2; 
        mySort(array, first, mid); 
        mySort(array, mid+1, last); 
        merge(array, first, mid, last); 
    	} 
}
    
