#include <stdio.h>
int main(){
	int array[12]={23,34,2,6,24,56,76,66,72,766,655,864};
	for (int i = 12; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if(array[j]>array[j+1]){
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;    
			}
		}
	}
	printf("Sorted Result: {");
	for(int i = 0; i < 12; i++){
			printf("%d, ", array[i]);
		}
	printf("}");
	return 0;
}