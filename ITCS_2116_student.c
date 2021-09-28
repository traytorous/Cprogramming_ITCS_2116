#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct {
  char* name;
  int id;
} Student;


struct Node {
  Student* data;
  struct Node* next;
};


struct Node* create_student(char* namez, int id);

void print_students(struct Node* head);

void delete_list(struct Node* head);


struct Node* add_student(struct Node* head, char* name, int id) {
  struct Node* new_head = create_student(name, id);
  new_head->next = head;
  return new_head;
}


int main() {
  struct Node* head = NULL;
  head = add_student(head, "John Smith", 800011);
  head = add_student(head, "Sarah Miller", 810325);
  head = add_student(head, "Jennifer Wilson", 821138);

  print_students(head);

  //Testing memory leak
  for (int j = 0; j < 10000; j++) {
    for (int i = 0; i < 10000; i++) {
      head = add_student(head, "test1", 888122);
    }
    delete_list(head);
    head = NULL;
  }
  return 0;
}


struct Node* create_student(char* namez, int idz){

struct Node student;
strcpy(student -> data -> name,namez);
strcpy(student -> data -> id,idz);



}
