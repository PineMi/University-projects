#include <stdio.h>
#include <stdbool.h>

bool isPrime(int m){
	for (int i=2; i<m; i++){
		if (m%i==0){
			return false;
		}
	}
	return true;
}


void main(){
	bool thatsTrue = true;
	int num;
	while (thatsTrue){
		printf("Insert a num: ");
		scanf("%d", &num);
		printf("%s\n\n", isPrime(num) ? "true" : "false");
	}
}

