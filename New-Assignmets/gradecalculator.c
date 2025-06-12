#include <stdio.h>
int main(){
float score;
printf("Enter Your Score In Percentage: ");
scanf("%f", &score);
if (score > 90){
printf("Your Grade is \"A\"");
}
else if (score < 90 && score > 75){
printf("Your Grade is \"B\"");
} 
else if (score < 75 && score > 60 ){
printf("Your Grade is \"C\"");
} 
else if (score < 60 && score > 30 ){
printf("Your Grade is \"D\"");
} 
else {
printf("Your Grade is \"F\"");
} 
return 0;
}
