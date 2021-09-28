#include <stdio.h>
#include <ctype.h>
void errorBegin(){
  printf("The password needs:");
}
void error1(){
printf("\n\tat least one symbol from {!,@,#,$,^,&}.");
}

void error2(){
  printf("\n\tat least one digit.");
}
void error3(){
  printf("\n\tto have at least six characters.");
}
void error4(){
  printf("\n\tat least one upper-case letter.");
}
void succeed(){
  printf("The password is strong!");
}
int main(void){
  char symbol [6] = {'!','@','#','$','^','&'};
  char userOutput [300];
  char charInput = '\0';
  int count;
  int checker [4] = {0,0,0,0};

  printf("Please enter a new password: ");
  while(!isspace(charInput)){

    scanf("%c", &charInput);
    userOutput[count] = charInput;
    count++;
  }
  int x;
  for (x = 0; x < count; ++x) {
    printf("%c",userOutput[x]);
    char test = userOutput[x];
    if(count-1 >= 6){
      checker[0] = 1;
    }
    if(isupper(test)){
      checker[1] = 1;
    }
    int symbol_checker = 0;
    for(; symbol_checker < 6; ++symbol_checker){
      if(test == symbol[symbol_checker]){
        checker[2] = 1;
      }
    }
    if(isdigit(test)){
      checker[3] = 1;
    }
  }

  int final = 0;
  int success = 0;
  for(; final < 4; ++final){
    if(checker[final] == 0){
      ++success;
    }
  }
  if(success == 0){
    succeed();
    return 0;
  }else{
    errorBegin();
    if(checker[0] == 0){
      error3();
    }
    if(checker[1] == 0){
      error4();
    }
    if(checker[2] == 0){
      error1();
    }
    if(checker[3] == 0){
      error2();
    }
    return 0;
  }



}
