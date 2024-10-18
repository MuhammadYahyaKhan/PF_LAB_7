#include<stdio.h>

int main(){
	int a[20];
	int b[20];
	
	for(int i = 0; i < 20; i++){
		printf("Enter array[%d]",i);
		scanf("%d",&a[i]);
	}
	
	for(int i = 19; i >= 0 ; i--){
		b[19 - i] = a[i];
	}
	
	printf("[");
	
	for(int i = 0; i < 20; i++){
		printf("%d, ",b[i]);
	}
	printf("]");
	return 0;
}