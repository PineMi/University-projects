#include <stdio.h>

void main(){
	int num, i;
		
	printf("Insert a Number to get all of it's dividers: ");
	scanf("%d", &num);
	for (i=1; i<num; i++){
		if (num % i == 0){
			printf("%d ", i);
		}
	}
	
}
