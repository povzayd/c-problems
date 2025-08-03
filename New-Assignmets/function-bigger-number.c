#include <stdio.h>
float bigger(float a, float b){
if (a > b)
return a;
else 
return b;
}
int main(){
float x,y;
printf("Enter 1st Number: ");
scanf("%f", &x);
printf("Enter 2nd Number: ");
scanf("%f", &y);
printf("The bigger no. among %f & %f is %f",x,y,bigger(x,y));

return 0;
}
