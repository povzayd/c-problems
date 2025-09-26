#include <stdio.h>
int main(){
int num;
printf("Check Whether An Integer Is Positive Negative Or Zero\n");//andha hai kya
printf("Enter Your Integer: ");
scanf("%d", &num);
if(num>0){
printf("The Entered Number is POSITIVE.");
}
else if(num<0){
printf("The Entered Number is NEGATIVE.");
}
else{
printf("The Entered Number is Zero.");
}
return 0;
}
