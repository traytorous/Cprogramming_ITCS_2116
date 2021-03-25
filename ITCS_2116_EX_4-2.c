#include <stdio.h>
#include <stdlib.h>
// Author Tray Keller
double cube_volume(double); 


int main() 
{   
    double user = 0.0;
    printf("Enter cube side size\n");
    scanf("%lf",&user);
    double product = cube_volume(user); 
    printf("Cube volume:%lf\n", product); 
} 

double cube_volume(double x) 
{ 
    return x*x*x; 
}
