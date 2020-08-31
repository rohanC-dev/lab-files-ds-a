#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	int n = 5;
	int ans = 1;
	for(i=1; i <= n; i++){
		ans = ans*i;
	}
	printf("the answer is %d\n", ans);
	return 0;
}
