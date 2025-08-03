#include <stdio.h>
int gcd(int a, int b){
if(b==0)
return a;
return gcd(b,a%b);
}
int main(){
int x,y,lcm;
printf("LCM OF 2 NUMBERS\n");
printf("Enter your first number: ");
scanf("%d", &x);
printf("Enter your second number: "); 
scanf("%d", &y);
lcm = (x*y)/ gcd(x,y);
printf("LCM of the numbers %d & %d is %d", x, y, lcm);
return 0;
}
