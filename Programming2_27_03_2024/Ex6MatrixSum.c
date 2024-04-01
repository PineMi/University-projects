#include <stdio.h>

void sum_matrix(int n, int m, float A[n][m], float B[n][m], float C[n][m]){
  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      C[i][j] = A[i][j] + B[i][j];
    }
  }
}

int main(void) {
  const int n = 5;
  const int m = 5;

  float A[n][m] =   {  
  {1.23, 2.45, 3.67, 4.89, 5.67},
  {6.78, 7.89, 8.90, 9.12, 10.23},
  {2.34, 3.45, 4.56, 5.67, 6.78},
  {7.89, 8.90, 1.23, 2.34, 3.45},
  {4.56, 5.67, 6.78, 7.89, 8.90}
                    };
  
  float B[n][m] = {
  {9.01, 8.90, 7.89, 6.78, 5.67},
  {4.56, 3.45, 2.34, 1.23, 0.12},
  {9.01, 8.90, 7.89, 6.78, 5.67},
  {4.56, 3.45, 9.34, 15.23, 9.12},
  {9.01, 8.90, 7.89, 6.78, 5.67}
                    };
  
  float C[n][m];

  sum_matrix(n, m, A, B, C);

  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      printf("| %.2f |", C[i][j]); 
    }
    printf("\n"); 
  }

  return 0;
}
