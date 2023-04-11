#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int aleatorio(int n){
  return (rand() %n + 1);
}
int main(void) {
  srand(time(NULL));
  printf("# RAND_MAX: %d\n", RAND_MAX);
  printf("%d", aleatorio(200));
  
  return 0;
}