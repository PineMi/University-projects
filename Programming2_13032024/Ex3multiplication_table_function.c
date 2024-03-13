#include <stdio.h>
#include <stdbool.h>

void multiplications(n){
	for (int i=1; i<=10; i++){
		printf("\n%d x %d = %d", n, i, n*i);
	}
}

void main(){
	int thatsTrue = true;
	while (thatsTrue){
		int num;
		printf("\n\n----------------------------------\nInsert a num: ");
		scanf("%d", &num);
		multiplications(num);
	}
}

