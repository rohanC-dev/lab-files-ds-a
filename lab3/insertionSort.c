#include "mySort.h"
#include <stdio.h>
void mySort(int array[], unsigned int first, unsigned int last){

    int i, key, j;  
    for (i = first; i < last+1; i++) 
    {  
        myCopy(&array[i], &key);  
        j = i - 1;  
        while (j >= 0 && (myCompare(array[j], key) > 0))
        {  
	    	mySwap(&array[j+1], &array[j]);  
            j = j - 1;  
        }  
        myCopy(&key, &array[j+1]);    
    } 


}
