#include <stdio.h>
int gcd(int a, int b){
if(b ==0)
return a;
return gcd(b,a%b);
}
int main(){
int x,y,z;
printf("Enter First Number: ");
scanf("%d", &x);
printf("Enter Second Number: ");
scanf("%d", &y);
printf("Enter Third Number: ");
scanf("%d", &z);
printf("The GCD of %d, %d, %d, is %d", x, y, z, gcd(x,gcd(y,z)));
return 0;
}
