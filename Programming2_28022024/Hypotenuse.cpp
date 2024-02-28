#include <stdio.h>
#include <math.h>

float cat1;
float cat2;
float hip;

int main(){
	printf("Input the lenght of the first cat: ");
	scanf("%f", &cat1);
	printf("Input the lenght of the second cat: ");
	scanf("%f", &cat2);
	
	hip = sqrt((pow(cat1, 2) + pow(cat2, 2)));
	printf("\nhypotenuse: %f", hip);
	
	return 0;
}
