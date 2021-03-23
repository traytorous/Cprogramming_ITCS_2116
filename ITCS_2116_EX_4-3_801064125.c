#include <stdio.h>
#include <math.h>
#include <stdlib.h>
// Author Tray Keller

double sigmoid(double); 


int main() { 

double user = 0.0;
printf("Enter sigmoid number ");
scanf("%lf", &user);

printf("Sigmoid(%lf) = %lf \n", user, sigmoid(user));

} 

double sigmoid(double x) {

return 1.0 / (1.0 + exp(-x) );
 
}
