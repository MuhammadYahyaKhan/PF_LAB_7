#include<stdio.h>

int main(){
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int b;
	printf("Enter the number to search\n");
	scanf("%d",&b);
	
	for(int i = 0; i < 10; i++){
		if(a[i] == b){
			printf("Number %d is found at index %d",b,i);
		}
	}
	return 0;
}