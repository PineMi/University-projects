#include <stdio.h>

float sum(float a, float b, float c){
	return a+b+c;
}

void main(){
	float n1;
	float n2;
	float n3;
	printf("First num: ");
	scanf("%f", &n1);
	printf("Second num: ");
	scanf("%f", &n2);
	printf("Third num: ");
	scanf("%f", &n3);
	printf("%f", sum(n1,n2,n3));
}


