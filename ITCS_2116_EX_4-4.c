#include <stdio.h>
#include <math.h>
#include <stdlib.h>
// Author Tray Keller

double geo_sum(double,double,int);


int main() {
int n;
double a, r;

printf("Enter a r n:\n");
scanf("%lg %lg %d", &a, &r,&n);
printf("sum = %lg \n",geo_sum(a,r,n));
return 0;

}

double geo_sum(double a,double r, int n) {

double count;
double num;

for(count = 0.0; count <= n; count++){
   num +=  pow(r, count);
}
  return num * a;

 }

