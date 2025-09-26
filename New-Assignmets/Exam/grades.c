#include <stdio.h>
int main(){
int marks;
printf("Grade Generator!!\n");
printf("Enter Your Marks In (percentage): ");
scanf("%d", &marks);
if(marks>= 90){
printf("Your Grade Is A");
}
else if(marks>= 75){
printf("Your Grade Is B");
}
else if(marks>= 60){
printf("Your Grade Is C");
}
else if(marks>= 30){
printf("Your Grade Is D");
}
else{
printf("Your Grade Is F");
}
return 0;
}
