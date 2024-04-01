#include <stdio.h>
#include <math.h>

float func_sum(n){
	float sum = 0;
	for (int k=1;k<=n;k++){
		sum = sum + (k/pow(k,2))*pow(-1,k+1);
	}
	return sum;
}

void main(){
	int n;
	printf("Insert a number:");
	scanf("%d", &n);
	printf("%f", func_sum(n));
}
