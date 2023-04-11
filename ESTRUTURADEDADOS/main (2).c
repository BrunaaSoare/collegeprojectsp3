#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int aleatorio(int n){
  return (rand() %n + 1);
}
int main(void) {
  int i,j;
  int cartela[10][6];
  srand(time(NULL));
  for(i=0; i <10; i++){
    for(j=0;j<6;j++){
      cartela[i][j]=aleatorio(60);
      printf("%d\t",  cartela[i][j]);
    } 
    printf("\n");
  }
  
  
  return 0;
}