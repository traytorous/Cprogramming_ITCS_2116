#include <stdio.h>
// Code by Tray Keller

int check_prime(int *, int * , int );

int main()
{
  // Cannot use malloc to dynamically acummulate array to the heap so putting array
  int array [200];
  int userInput = 0;
  int count = 0;
  int size = 0;
  printf("Enter N: ");
  scanf("%d", &userInput);
  for(; count < userInput; ++count){
  check_prime(array,&size,count);
}
printf("Prime numbers: ");
int count2;
for(count2 = 0; count2 < size; count2++){
  printf("%d ", array[count2]);
}

/* Prototypes are below
  int count = 0;
  int size = 0;

  for(;count < userInput; ++count , ++prime){
      if(prime == 2){
        array[0] = 2;
        ++size;
        continue;
      }
      if(prime == 3){
        array[1] = 3;
        ++size;
        continue;
      }

      if(prime % 2 != 0 && prime % 3 != 0){
      array[size] = prime;
      ++size;
      }
  }
 printf("Prime numbers: ");
int count2;
 for(count2 = 0; count2 < size; count2++){
   printf("%d ", array[count2]);
 }

 printf("");
 printf("\n");
//-------------------------
printf("Using check_prime function starting now!\nEnter N: ");
scanf("%d", &userInput);
printf("\n\n Checking ->%d\n", check_prime(array,&size,&userInput));

printf("Prime numbers: ");
count2 = 0;
for(; count2 < size; count2++){
  printf("%d ", array[count2]);
}
printf("\n");


*/
}

int check_prime(int * array , int *size, int k){
  if(k == 1){
    return 0;
  }
  if(k == 2){
    array+= *size;
    ++(*size);
   *array= k;
    return 1;
  }
  if(k == 3){
     array+= *size;
     ++(*size);
    *array= k;
     return 1;
    }
  if( k % 2 != 0 && k % 3 != 0){
     array+= *size;
     ++(*size);
    *array= k;
     return 1;
  }
  return 0;

}
