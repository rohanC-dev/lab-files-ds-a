#include "mySort.h"
void mySort(int d[], unsigned int n){
int i, j;  
    for (i = 0; i < n-1; i++)      
		for (j = 0; j < n-i-1; j++)  
			if (d[j] > d[j+1]){  
				d[j] = d[j+1];
				d[j+1] = d[j];
			}
}
