#include <stdio.h>

int divisiveis(int array[], int tam, int x) {
    if (tam == 0) {
        return 0;
    }
    int soma = (array[tam - 1] % x == 0) ? array[tam - 1] : 0;
    return soma + divisiveis(array, tam - 1, x);
}

int main() {
    int array[] = {10, 5, 3, 6, 8, 12, 6};
    int tam = sizeof(array) / sizeof(array[0]);
    int x = 2;
    int resultado = divisiveis(array, tam, x);
    printf("%d", resultado);
    return 0;
}
