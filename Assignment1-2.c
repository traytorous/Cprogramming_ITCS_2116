#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double compound_interest(double p, double i, double n);
int main(void){
 double principle;
 double rate;
 double time;
 double result;
//---------------------------------------------
 printf("\nDollar amount to invest: ");
 scanf("%lf", &principle);
 if(principle < 0){
 while(1){
 printf("\nTry again; enter an amount > 0: ");
 scanf("%lf", &principle);
 if(principle > 0){
 break;
 }
 }
 }
//---------------------------------------
 printf("\nPercentage interest rate: ");
 scanf("%lf", &rate);
 if(rate < 0 || rate >= 15 ){
 while(1){
 printf("\nRate must be > 0 and <= 15 %: ");
 scanf("%lf", &rate);
 if(time > 0){
 break;
 }
 }
 }
 //---------------------------------------------
 printf("\nYears of investment: ");
 scanf("%lf", &time);
 if(time < 0 ){
 while(1){
 printf("\nYears must be > 0: ");
 scanf("%lf", &time);
 if(time > 0){
 break;
 }
 }
 }
 //-----------------------------------------------
 result = compound_interest(principle,rate,time);
 printf("\nIf you invest %lf at %lf%\nIt's value in %lf will be %lf\n",
principle, rate, time, result);
}
double compound_interest(double p, double i, double n){
return p * (pow((1+i/100),n));
}
