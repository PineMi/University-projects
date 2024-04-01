#include <stdio.h>
#include <stdbool.h>
float cels_to_fahr(float cels){
	return (cels * 9/5)+32;
}

float fahr_to_cels(float fahr){
	return (fahr-32)/1.8;
}
void main(){
	bool thatsTrue = true;
	while (thatsTrue) {
		int op;
		float value;
		printf("\n----------------------------------------\n1 - Fahrenheit to celcius\n2 - Celcius to Fahrenheit\nOption: ");
		scanf("%d", &op);
		printf("Value: ");
		scanf("%d", &value);
		
		if (op==1){
			printf("Celsius: %f", fahr_to_cels(value));
			
		}
		else if (op==2){
			printf("Fahrenheit: %f", cels_to_fahr(value));
		}
		else {
			printf("Invalid Option.");
		}
	}

}


