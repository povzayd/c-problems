#include <stdio.h>
int main()
{
float score;
printf("Enter Your Score: ");
scanf("%f", &score);
if (score >=80){
printf("Your Score Is \'High\'");
}
else if  (score<80 && score>50){ 
printf("Your Score Is \'Moderate\'");
}
else {
printf("Your Score is  \'Low\'");
}
return 0;
}
