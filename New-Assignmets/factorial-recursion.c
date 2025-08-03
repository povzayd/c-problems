#include <stdio.h>
int fact(int n){
if (n == 0)
return 1;
else 
return n * fact(n - 1);
}
int main(){
int x;
printf("Enter a no.: ");
scanf("%d", &x);
printf("Factorial of %d is %d", x, fact(x));
}
