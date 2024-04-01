#include <stdio.h>

void mult_matrix(int n, int m, float A[n][m], float B[n][m], float C[n][m]){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      C[i][j] = 0;
      for(int k = 0; k < m; k++){
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }
}

int main(void) {
  const int n = 3;
  const int m = 3;
  const int p = 3;

  float A[n][m] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  float B[m][p] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  
  float C[n][p];

  mult_matrix(n, m, A, B, C);

  for (int i = 0; i < n; i++){
    for (int j = 0; j < p; j++){
      printf("| %.2f |", C[i][j]); 
    }
    printf("\n"); 
  }

  return 0;
}
