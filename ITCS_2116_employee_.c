#include <stdio.h>
#include <string.h>

typedef struct Employee{
char* name;
char*  employeeID;
char* address;
char* city;
char* state;
char* zipCode;
}Employee;
void load_employee(char [] ,Employee* );
void print_employees(Employee[], int);
int main(){

    Employee employees[20];
    char* line1 = "Jose A. Lopez;123 Any Street;Raleigh;NC;27615;8123000";
    char* line2 = "Carla Louise Decker;915 Oak Circle;Plano;TX;75074;857500";

    int num = 0; 
    printf("1");
    load_employee(line1, &employees[num++]);
    printf("2");
    load_employee(line2, &employees[num++]);
    print_employees(employees, num);

    return 0;


}


void print_employees(Employee[], int);


void load_employee(char string[],Employee* e){
    
    char str[500];
    strcpy(str,string);
    int count;
    char *token = strtok(str, ";");
 
        while(token != NULL)
        {
                switch(count){
                    case 0:strcpy(e->name,token); break;
                    case 1: strcpy(e->address,token);break;
                    case 2:strcpy(e->city,token);break;
                    case 3:strcpy(e->state,token);break;
                    case 4:strcpy(e->zipCode,token);break;
                    case 5:strcpy(e->employeeID,token);break;
                }
                token = strtok(NULL, ";");
                ++count;
        }
}

