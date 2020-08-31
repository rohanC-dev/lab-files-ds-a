#include <stdlib.h>
#include "towers.h"

int main(int argc, char **argv){
	int n, from, dest;
	if(argc == 1){
		n = 3;
    	from = 1;
    	dest = 2;
	}else if(argc == 2){
		n = atoi(argv[1]);
    	from = 1;
    	dest = 2;
	}else if(argc == 4){
		n = atoi(argv[1]);
		from = atoi(argv[2]);
		dest = atoi(argv[3]);
	}else{
		//fprintf(stderr, "error");
		exit(1);	
	}
    towers(n, from, dest);
    exit(0);
}

