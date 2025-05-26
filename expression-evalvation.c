#include <stdio.h>
int main (){
    double x,y,exp1,exp2;
    printf("Expression Evalvation\n");
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the value of y: ");
    scanf("%lf", &y);
    exp1=((x+y) * (x-y));
    printf("The first Solution is %lf\n", exp1);
    if (x != y) {
        exp2=((x+y)/(x-y));
        printf("The second solution is %lf", exp2);
    }else {
        printf("Invalid Operation");
    }
    return 0;
}