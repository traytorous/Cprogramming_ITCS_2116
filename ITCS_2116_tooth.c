#include <stdio.h>
#include <ctype.h>

void work(void);
char check(char userIn);

int main(void){



char more = 'Y';
do{
work();
printf("\nDo you want to continue (Y/N)? ");
scanf(" %c", &more);
more = toupper(more);
}while(more != 'N');
return 0;
}

char check(char userIn){
  if(userIn == 's'){
    return 't';
  }else if (userIn == 'S'){
    return 'T';
  }else{
    return userIn;
  }
}

void work(void){
  char userOutput [300];
  char char1, char2;
  int count;
  printf("\nEnter a sentence and terminate with a period.\n");
  while(char1 != '.'){
    char1 = getchar();

    if(char1 =='s' || char1 == 'S'){
      if(char2 != 's'){
        userOutput[count] = (check(char1));
        count++;
        userOutput[count] = 'h';
        char2 = tolower(char1);
        count++;
      }
    }

      else{

        userOutput[count] = tolower(char1);
        char2 = tolower(char1);
        count++;
      }
    }

  int i;
  for ( i = 0; i < count; i++) {
    printf("%c",userOutput[i]);
  }
}
