#include <stdio.h>
int main(){
char fname[20];
char lname[20];
int age;
printf("Hello! Welcome\n");
printf("Please Enter Your Details\n");
printf("Please Enter Your First Name: ");
scanf("%s", &fname);
printf("Please Enter Your Last Name: ");
scanf("%s", &lname);
printf("Please Enter Your Age: ");
scanf("%d", &age);
printf("=================================\n");
printf("Hello %s %s! Welcome To Our Systems.According To Our Data You Are %d years old. Thanks For Being Our Part.", fname, lname, age);
return 0 ;
}
