#include <stdio.h>
int main(){
double num1, num2, div;
printf("Comparing 2 numbers using ternary operator");
printf("Enter Your First Number: ");
scanf("%lf", &num1);
printf("Now,Enter Your Second Number: ");
scanf("%lf", &num2);
div = (num1 / num2);
div >=1 ? printf("The greater number is %lf", num1) : printf("The greater number is %lf", num2);
return 0;

}
