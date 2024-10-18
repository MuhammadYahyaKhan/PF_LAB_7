#include<stdio.h>

int main(){
	int a[15];
	
	for(int i = 0; i < 15;i++){
		printf("Enter array[%d]",i);
		scanf("%d",&a[i]);
	}
	
	int sum = 0;
	
	for(int i = 0; i < 15; i++){
		sum = sum + a[i];
	}
	
	printf("Sum = %d",sum);
	return 0;
}