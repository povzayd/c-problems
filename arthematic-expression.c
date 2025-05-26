#include <stdio.h>
int main (){
    double a,b,c,d,e,f,g,oper;
    printf("ARTHEMATIC OPERATION PROBLEM\n");
    printf("Enter the value of a: ");
    scanf("%lf", &a);
    printf("Enter the value of b: ");
    scanf("%lf", &b);
    printf("Enter the value of c: ");
    scanf("%lf", &c);
    printf("Enter the value of d: ");
    scanf("%lf", &d);
    printf("Enter the value of e: ");
    scanf("%lf", &e);
    printf("Enter the value of f: ");
    scanf("%lf", &f);
    printf("Enter the value of g: ");
    scanf("%lf", &g);
    oper=((a + b/c * d -e)*(f - g));
    printf("The sollution of the arthematic expression is %lf", oper);
    return 0;
    
}