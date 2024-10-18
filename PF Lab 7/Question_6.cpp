#include<stdio.h>

int main(){
	int size = 20;
	int a[size];
	int largest = a[0];
	int smallest = a[0];
	for(int i = 0; i < size;i++){
		printf("Enter array[%d]",i);
		scanf("%d",&a[i]);
	}
	
	for(int i = 0; i < size; i++){
		if(a[i] > largest){
			largest = a[i];
		}
		if(a[i] < smallest){
			smallest = a[i];
		}
	}
	
	printf("Maximum Number = %d\nMinimum Number = %d", largest, smallest);
	
	return 0;
	
}