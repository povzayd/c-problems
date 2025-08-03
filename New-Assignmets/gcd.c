#include <stdio.h>
int gcd(int a, int b){
if(b==0)
return a;
return gcd(b,a%b);
}
int main(){
int x,y;
printf("Enter your first number: ");
scanf("%d", &x);
printf("Enter your second number: "); 
scanf("%d", &y);
printf("The GCD of the numbers %d & %d is %d", x, y, gcd(x,y));
}
