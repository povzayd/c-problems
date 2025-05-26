#include <stdio.h>
int main (){
const double feet=30.48;
double cm, sol;
//int sol;
printf("Enter Value In feet: ");
scanf("%lf",&cm);
sol=(cm*feet);
printf("Given Value In cms is :%lf",sol);
return 0;
}
