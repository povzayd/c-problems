#include <stdio.h>

int main() {
    double num1, num2, num3;
    printf("Enter First Number: ");
    scanf("%lf", &num1);
    printf("Enter Second Number: ");
    scanf("%lf", &num2);
    printf("Enter Third Number: ");
    scanf("%lf", &num3);
    if (num1 >= num2 && num1 >= num3) {
        printf("The largest number is %lf\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("The largest number is %lf\n", num2);
    } else {
        printf("The largest number is %lf\n", num3);
    }
    return 0;
}