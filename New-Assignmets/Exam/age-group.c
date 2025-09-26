#include <stdio.h>
int main(){
int age;
printf("Group Generator!!\n");
printf("Enter Your Age: ");
scanf("%d", &age);
if(age <= 13){
printf("You are a CHILD.");
}
else if(age <= 20){
printf("You are a TEEN.");
}
else if(age <= 60){
printf("You are an adult.");
}
else{
printf("You are a Senior Citizen.");
}
return 0;
}
