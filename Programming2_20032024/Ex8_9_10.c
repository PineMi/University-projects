#include <stdio.h>
#include <stdbool.h>

void intersection(int a[], int b[], int ta, int tb){
	for (int i=0; i < ta; i++){
		for (int j=0; j < tb-1; j++){
			if (a[i]==b[j]) {
				printf("%d ", a[i]);	
			} 
		}
	}
}

void difference(int a[], int b[], int ta, int tb){
	for (int i=0; i < ta; i++){
		bool match = false;
		for (int j=0; j < tb; j++){
			if (a[i]==b[j]){
				match = true;
			}
		}
		if (!match) {
			printf("%d ", a[i]);
		}
	}
}

void array_union (int a[], int b[], int ta, int tb){
	
	for (int i=0; i < ta; i++) {
		bool match = false;
		for (int j=0; j < tb; j++){
			if (a[i]==b[j]){
				match = true;
			}
		}
		if (!match) {
			printf("%d ", a[i]);
		}
	}
	
	for (int h=0; h < tb; h++){
		printf("%d " , b[h]);
	}

}

int main (){
	// Exercício 8
	int a[] = {1,2,3,4,5};
	int b[] = {2,4,5,9,7};
	int ta = 5;
	int tb = 5;	
	printf("Intersection: ");
	intersection(a,b,ta,tb);
	
	// Exercício 9
	
	printf("\nDifference: ");
	difference(a,b,ta,tb);
	
	// Exercício 10
	printf("\nUnion: ");
	array_union(a,b,ta,tb);
}
