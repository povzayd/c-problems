#include <stdio.h>
int main(){
const double pi = 3.14159;
int choice;
double radius;
printf("Circle Area & Circumference Calculator\n");
printf("Enter The Radius Of the Circle: ");
scanf("%lf", &radius);
printf("Enter 1 for Area & 2 for Cicumference: ");
scanf("%d", &choice);
if(choice==1){
printf("The Area Of The Circle Will Be %lf", pi*radius*radius);
return 0;
}
else if(choice==2){
printf("The Circumference Of The Circle Will Be %lf", 2*pi*radius);
return 0;
}else{
printf("Try Again!Invalid Choice!");}
return 0;
}
