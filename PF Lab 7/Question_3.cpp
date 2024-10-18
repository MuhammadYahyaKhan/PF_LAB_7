#include<stdio.h>

int main(){
	
	int a[12];
	
	for(int i = 0; i < 12; i++){
		printf("Enter array[%d]",i);
		scanf("%d",&a[i]);
	}
	
	int sum_pair[6];
	int j = 0;
	for(int i = 0; i < 12; i = i + 2){
		sum_pair[j] = a[i] + a[i+1];
		j++;
	}
	printf("[");
	for(int i = 0; i < 6; i++){
		printf("%d,",sum_pair[i]);
	}
	printf("]");
	
	
	return 0;
}