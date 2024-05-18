#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


bool inverter(int v[], int n) {
  for (int i = 0; i < n/2; i++) {
    int tmp = v[i];
    v[i] = v[n-1-i];
    v[n-1-i] = tmp;
  }
}

void trocar(int v[], int i, int j) {
  int tmp = v[i];
  v[i] = v[j];
  v[j] = tmp;
}

bool contem(int v[], int n, int e) {
  for (int i = 0; i < n; i++) {
    if (v[i] == e) {
      return true;
    }
  }
  return false;
}

void gerar_crescente(int v[], int n) {
  int qtd = 0;
  int inicial = 1;
  int final = n * 10;
  while (qtd < n) {
    int e = rand() % (final - inicial) + inicial;
    v[qtd] = e;
    qtd++;
    inicial = e + 1;
    final = e + n * 10;
  }
}

void gerar_decrescente(int v[], int n) {
  gerar_crescente(v, n);
  inverter(v, n);
}


void gerar_aleatorio(int v[], int n) {
  int qtd = 0;
  while (qtd < n) {
    int e = rand() % (n*10) + 1;
    if (!contem(v, n, e)) {
      v[qtd] = e;
      qtd++;
    }
  }
}

void mesclar(int v[], int n, int vetor1[], int n1, int vetor2[], int n2){
  int i = 0, i1 = 0, i2 = 0;
  while(i1 < n1 && i2 < n2){
    if(vetor1[i1] > vetor2[i2]){
      v[i] = vetor2[i2];
      i2++;
    }
    else{
      v[i] = vetor1[i1];
      i1++;
    }
    i++;
  }
  while(i1<n1){
    v[i] = vetor1[i1];
    i++;
    i1++;
  }
  while(i2<n2){
    v[i] = vetor2[i2];
    i++;
    i2++;
  }
}

void merge_sort(int v[], int n) {
  if(n<=1){
    return;
  }
  int n1 = n/2;
  int n2 = n-n1;
  int vetor1[n1];
  int vetor2[n2];
  for(int i = 0; i < n1 ; i++){
    vetor1[i] = v[i];
  }
  for(int i = 0; i < n2 ; i++){
    vetor2[i] = v[n1+i];
  }
  merge_sort(vetor1,n1); 
  merge_sort(vetor2,n2);
  mesclar(v, n, vetor1, n1, vetor2, n2);
}

void bubble_sort(int v[], int n) {
  int i, contador;
  int cont = 0; 
    for (contador = 1; contador <= n-1; contador++) {
        for (i = 0; i < n-1; i++) {
          cont++;
            if (v[i] > v[i+1]) {
                trocar(v, i, i+1);

            }
        }
    }
}

int main(void) {
  clock_t inicio, fim;
  double tempo;

  int x = 200000; 
  int* numeros = malloc(x * sizeof(int));


  //gerar_aleatorio(numeros, x);
  //gerar_crescente(numeros, x);
  gerar_decrescente(numeros, x);

  inicio = clock();
  merge_sort(numeros, x);
  bubble_sort(numeros, x);
  fim = clock();

  tempo = ((double) (fim - inicio)) / CLOCKS_PER_SEC;
  printf("Tempo gasto: %f segundos\n", tempo);
  free(numeros); 

  return 0;
}
