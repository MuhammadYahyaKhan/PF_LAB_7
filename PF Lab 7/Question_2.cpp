#include<stdio.h>

int main(){
	int a[10];
	
	for(int i = 0; i < 10; i++){
		printf("Enter array[%d]",i);
		scanf("%d",&a[i]);
	}
	
	int first_number = a[0];
	
	for(int i = 0; i < 9; i++){
		a[i] = a[i+1];
	}
	a[9] = first_number;
	printf("[");
	for(int i = 0; i < 10 ;i++){
		printf("%d,",a[i]);
	}
	printf("]");
	return 0;
}