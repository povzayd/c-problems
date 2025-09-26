#include <stdio.h>
int main(){
int num;
printf("ABSOLUTE VALUE OF AN INTEGER!!\n");
printf("Enter The Number: ");
scanf("%d", &num);
if(num >= 0){
printf("The Absolute Value Of The Number %d is %d", num, num);
}
else{
printf("The Absolute Value Of The Number %d is %d", num, ((-1)*num)); 
}
return 0;
}
