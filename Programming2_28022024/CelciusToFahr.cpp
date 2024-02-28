#include <stdio.h>

float celcius;
float fahrenheit;

int main(){
	printf("Input the temperature in celcius: ");
	scanf("%f", &celcius);
	fahrenheit = (9*celcius+160)/5;
	printf("\nTemperature in fahrenheit: %f", fahrenheit);
	
	return 0;
}
