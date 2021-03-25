#include <stdio.h>
// Code by Tray Keller
int check_prime(int *, int * , int );
int main()
{
 // Cannot use malloc to dynamically acummulate array to the heap so putting array
 int array [200];
 int userInput = 0;
 int size = 0;
 printf("Enter N: ");
 scanf("%d", &userInput);
 printf("Prime numbers: ");
 check_prime(array,&size,userInput);
 int count2;
 for(count2 = 0; count2 < size; count2++){
 printf("%d ", array[count2]);
 }
 printf("\n");
}
int check_prime(int * array , int *size, int k){
 if(k == 1){
 return 0;
 }
 int i = 2;
 int y;
 int isPrime = 1;
 for(; i < k; i++){
 for( y = 2; y < i ; y++){
 //printf(" i = %d, y = %d, i mod y = %d\n", i , y, i%y);
 if(i % y == 0){
 isPrime = 0;
 break;
 }
 }
 if(isPrime){
 *array = i;
 ++(*size);
 array++;
 }
 isPrime = 1;
 }
 return 1;
 }
