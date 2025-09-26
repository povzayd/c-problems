#include <stdio.h>
#include <math.h>
int main(){
double prin;
float rate,time;
printf("Compound Interest Calculator\n");
printf("Enter The Principal Amount: ");
scanf("%lf", &prin);
printf("Enter The Rate Of Interest: ");
scanf("%f", &rate);
printf("Enter The Time Period: ");
scanf("%f", &time);
printf("The Amount After Interest Will Be: %f", prin*(pow((1 + rate/100),time)));
return 0;
}
