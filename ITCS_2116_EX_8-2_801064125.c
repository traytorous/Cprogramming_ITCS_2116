#include <stdio.h>
// Author Tray Keller

int contains_negative(int arr[], int size, int* neg_element);


int main()
{
    int x [] = {1,2,3};
    int y [] = {-1,0,1};
    int * x1 = NULL;
    int * y1 = NULL;
    printf("%d\n",contains_negative(x, 3,x1));
    printf("%d\n",contains_negative(y, 3,y1));


}

int contains_negative(int arr[], int size, int* neg_element){
  int x = 0;
  for(x; x < size; ++x){
         if(arr[x] < 0){
         neg_element = &arr[x];
         return 1;
         }
    neg_element = NULL;
  }
  return 0;

}
