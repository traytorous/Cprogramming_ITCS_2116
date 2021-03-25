#include <stdio.h>
#include <stdlib.h>
int main(){
int largest = 0;
int largest2 = 0;
int temp = 0;
int indicator = 0;
int count = 0;
double average = 0;
while (1) {
 if(indicator == 0){
 printf("Enter the first number: ");
 scanf("%d", &largest);
 indicator++;
 if(largest < 0){
 printf("Largest is N/A\nSecond largest is N/A\nAverage is N/A\n");
 break;
 }
 printf("Enter the next number: ");
 scanf("%d", &temp);
 if(temp < 0){
 printf("Largest is %d\nSecond largest is N/A\nAverage is N/A\n", largest);
 break;
 }
 if(temp > largest){
 largest2 = largest;
 largest = temp;
 temp = 0;
 }else{
 largest2 = temp;
 }
 count++;
 average = largest + largest2;
//------------------------------------------------------------------
}else{
 printf("Enter the next number: ");
 scanf("%d", &temp);
 count++;
 average += temp;
 // Fix the average in the string
 if(temp < 0){
 average += 1;
 printf("Largest is %d\nSecond largest is %d\nAverage is %f\n", largest,
largest2, average / count);
 break;
 }
 if(temp > largest){
 largest2 = largest;
 largest = temp;
 temp = 0;
 if(temp > largest2){
 largest2 = temp;
        }
      }
    }
  }
}
