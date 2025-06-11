#include <stdio.h>
int main()
{
float num1, num2, oper;
printf("CALCULATOR\n");
printf("Enter first No.: ");
scanf("%f", &num1);
printf("Enter second No.: ");
scanf("%f", &num2);
oper = num1 + num2;
printf("The Sum of Given No.'s is: %f\n", oper);
oper = num1 - num2;
printf("The Diff of Given No.'s is: %f\n", oper);
oper = num1 * num2;
printf("The Product of Given No.'s is: %f\n", oper);
oper = num1 / num2;
printf("The \"/\" of Given No.'s is: %f\n", oper);
oper = (int)num1 % (int)num2;
printf("The Modulas of Given No.'s is: %f\n", oper);
return 0;

}
