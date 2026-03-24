#include <stdio.h>
int main(){
	int array[5] = {1,2,3,4,5};
	int flag = 0, low = 0, up = 4, mid, item;
	printf("Enter the search term: ");
	scanf("%d", &item);
	while(low <= up){
		mid = (low + up)/2;
		if(array[mid] == item){
			flag =1;
			break;
		}
		if(array[mid]<item){
			low = mid + 1;
		}
		else{
			up = mid - 1; 
	}
}
	if(flag == 1){
		printf("Element Found!");
	}
	else{
		printf("Element not found!");
	}
	return 0;
	
}
