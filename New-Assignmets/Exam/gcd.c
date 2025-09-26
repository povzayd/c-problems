#include <stdio.h>
int gcd(int a, int b){
if(b==0)
return a;
return(b,a%b);
}
int main(){
int x,y;
printf("Enter first number: ");
scanf("%d", &x);
printf("Enter second number: ");
scanf("%d", &y);
printf("THE GCD OF THE NUMBERS %d & %d Is %d", x, y, gcd(x,y));
return 0;
}
