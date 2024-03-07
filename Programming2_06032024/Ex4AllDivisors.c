#include <stdio.h>

int main(){
	int num, i;
	int count = 0;

	printf("Insert a Number to get all of it's dividers: ");
	scanf("%d", &num);
	for (i=1; i<num; i++){
		if (num % i == 0){
			printf("%d ", i);
			count += i;
		}
	}
	if (count == num){
	    printf("\n%d is a perfect number!", num);
	}
    return 0;
}
