#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int* copy(int ar[], int n);

int* copy_offset(int ar[], int n, int offset);

void print_array(int ar[], int size){
  for (int i = 0; i < size; i++ ) {
    printf("%d ", ar[i]);
  }
  printf("\n");
}

int main() {
  int myar[10] = {1,5,12, 23, 14, 20, 40, 50, 13, 81};
  int* mycp = copy(myar, 5);
  int* mycp2 = copy_offset(myar, 5, 5);

  print_array(myar, 10);
  print_array(mycp, 5);
  print_array(mycp2, 5);

  free(mycp);
  free(mycp2);
  return 0;
}

int * copy(int arr [], int n){

int * ret = malloc(n*sizeof(int));

int count = 0;
for(; count < n; ++count){
ret[count] = arr[count];
}

return ret;

}


int* copy_offset(int ar[], int n, int offset){

int * a = malloc(n*sizeof(int));
int count = 0;
for(; count < n; ++count){
a[count] = ar[count + offset];
}

return a;



}
