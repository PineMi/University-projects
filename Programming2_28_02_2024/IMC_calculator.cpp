#include <stdio.h>

float height;
float weight;

int main(){
	
	printf("Input your height: ");
	scanf("%f", &height);
	printf("Input your weight: ");
	scanf("%f", &weight);
	
	printf("Your IMC: %f", weight/(height*height));
}
