#include <stdio.h>

/* 
A program that tells you the color of a given wave lenght
Universidade Presbiteriana Mackenzie - São Paulo, Brazil
21/02/2024 (dd/MM/yyyy)

Miguel Piñeiro
*/

int cSpeed = 299792458; // (m/s)
int frequency; // (THz)
int wave_lenght; // (nm)


int main(){
	printf("What is the lenght of the wave in nanometers?: ");
	scanf("%d", &wave_lenght);
	frequency = (cSpeed / wave_lenght) / 1000;
	
	printf("\n\nInput Wave:\nWave Lenght: %d | Frequency: %d (THz) | Speed of light: %d (m/s)\n\nEstimated Color: ", wave_lenght, frequency, cSpeed);
	
	if (wave_lenght > 740 || wave_lenght <= 380){
		printf("Ops, out of the visible spectrum, try a value between 380nm and 740nm.");
			
	} else if (wave_lenght > 625){
		printf("Red (625nm ~ 740nm)");
	} else if (wave_lenght > 590){
		printf("Orange (590nm ~ 625nm)");
	} else if (wave_lenght > 565){
		printf("Yellow (565nm ~ 590nm)");
	} else if (wave_lenght > 500){
		printf("Green (500nm ~ 565nm)");
	} else if (wave_lenght > 485){
		printf("Cyan (485nm ~ 500nm)");
	} else if (wave_lenght > 440){
		printf("Blue (440nm ~ 485nm)");
	} else if (wave_lenght > 380){
		printf("Violet (380nm ~ 440nm)");
	}
	
	return 0;
}