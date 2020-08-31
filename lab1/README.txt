betterSort(int data[], int first, int last){
if(first < last){
	int pi = partition(data, first, last);
	betterSort(data, first, pi - 1);
	betterSort(data, pi + 1, last);
}

int partition(int data[], int first, int last){
	int pivot = data[last];
	int i = first - 1;
	int j;
	for(j = first; j <= last - 1; j++){
		if(data[j] <= pivot){
			i++;
			swap(&data[i], &data[j]);
		}
	}
	swap(&data[i+1], &data[last]);
	return(i+1);
}