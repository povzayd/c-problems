#include <stdio.h>
int main(){
double prin;
float rate,time;
printf("Simple Interest Calculator\n");
printf("Enter The Principal Amount: ");
scanf("%lf", &prin);
printf("Enter The Rate Of Interest: ");
scanf("%f", &rate);
printf("Enter The Time Period: ");
scanf("%f", &time);
printf("The Amount After Interest Will Be: %f", (prin+(prin*rate*time/100)));
return 0;
}
