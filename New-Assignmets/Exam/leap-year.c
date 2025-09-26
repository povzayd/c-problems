#include <stdio.h>
int main(){
int year;
printf("===LEAP YEAR DETECTOR===");
printf("Enter The Year: ");
scanf("%d",&year);
if(year % 4 == 0){
printf("YES! The Year %d Is A Leap Year.", year);
}
else{
printf("Hell Nah! This Isnt A Leap Year.");
}
return 0;

}
