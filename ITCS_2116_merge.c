#include <stdio.h>
// Code by Tray Keller
void arraymerge();
void sorting(int [], int);
int errorMessage(int, int);
int main()
{
  arraymerge();
}

void arraymerge(){
int array1 [100];
int array2 [100];
int array3 [200];
int x = 0;
int y = 0;
int errorcode = 0;
printf("Enter Array A: ");
for(;; x++ ){
scanf("%d", &array1[x]);
    if(array1[x] < 0){
      break;
    }
}

printf("Enter Array B: ");
for(;;y++){
scanf("%d",&array2[y]);
    if(array2[y] < 0){
    break;
}
}

// was gonna use this for something. Forgot
//errorcode = errorMessage(x, y);
errorMessage(x,y);

int count = 0;
for(; count < x; ++count){
    array3[count] = array1[count];
}

int count2 = 0;
for(; count2 < y; ++count,++count2){
    array3[count] = array2[count2];
}

  int count3 = 0;

  sorting(array3,x+y);

  printf("\nMerge (ascending): ");
  for(count3 = 0; count3 < x+y; ++count3){
  printf("%d ",array3[count3]);
  }
  printf("\nMerge (decending): ");
  for(count3 = x+y-1;count3 > -1; --count3){
  printf("%d ",array3[count3]);
  }
  printf("\n");

}

int errorMessage(int x, int y){
  if(x == 0 && y == 0){
    printf("\nBoth arrays emtpy. Printing nothing.\n");
    return 1;
  }
  else if(x > 0 && y == 0){
    printf("\nArray B is emtpy. Printing only Array A.\n");
      return 2;
  }
  else if(x == 0 && y > 0){
    printf("\nArray A is emtpy. Printing only Array B.\n");
    return 3;
  }
}


void sorting(int array [], int size){
  int count, count2;
  for (count = 0; count < size-1; ++count){
  for (count2 = 0; count2 < size-count-1; ++count2){
  if (array[count2] > array[count2+1]){
  int temp = array[count2];
  array[count2] = array[count2+1];
  array[count2+1] = temp;
  }
}
}

}
