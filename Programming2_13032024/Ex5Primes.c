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

void allPrimes(int start, int end){
	for (int i=start; i<end; i++){
		if (isPrime(i)){
			printf("%d ", i);
		}
	}
}

void main(){
	bool thatsTrue = true;
	int startn;
	int endn;
	while (thatsTrue){
		printf("\nStart: ");
		scanf("%d", &startn);
		
		printf("End: ");
		scanf("%d", &endn);
		allPrimes(startn, endn);
	}
}

