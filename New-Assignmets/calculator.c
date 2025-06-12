#include <stdio.h>
int main(){
double num1, num2;
char oper;
printf("Enter Your First Number: ");
scanf("%lf", &num1);
printf("Now,Enter Your Second Number: ");
scanf("%lf", &num2);
label:
printf("Enter The Operation You Want To Perform(+,-,*,/,%): ");
scanf(" %c", &oper);
switch (oper){
case '+':
printf("The Sum of the numbers %lf ,%lf will be: %f\n", num1, num2, (num1 + num2));
break;
case '-':
printf("The Difference of the numbers %lf ,%lf will be: %f\n", num1, num2, (num1 - num2));
break;
case '*':
printf("The Product of the numbers %lf ,%lf will be: %f\n", num1, num2, (num1 * num2));
break;
case '/':
if (num2 != 0){
printf("The Sum of the numbers %lf ,%lf will be: %f\n", num1, num2, ((double)num1 / (double)num2));
}else
{
printf("The Given Operation can't be performed.");
}
break;
case '%':
printf("The Remainder of the numbers %lf ,%lf will be: %d\n", num1, num2, ((int)num1 % (int)num2));
//case '+':
//printf("The Sum of the numbers %lf ,%lf will be: ", num1, num2, (num1 + num2));
default:
printf("Enter a valid operation!!\n");
break;
}
goto label;
return 0;
}

