#include  <stdio.h>
int main()
{
int num;
printf("ENter an integer: ");
scanf("%d", &num);
if ( num > 0){
printf("The given number %d is positive", num);
}
else if (num < 0){ 
printf("The given number %d is negative", num);
}
else{
printf("The Number Entered Is %d", num);
}
return 0;

}
