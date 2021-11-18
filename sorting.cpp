#include<stdio.h>
#include <stdlib.h>
#include<time.h>
int swap(int *a ,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int insertionsort(int arr[] ,int size){
	float time_st1=clock();
	for(int i=0;i<size;i++){
		int j=i;
		while(j>0 && arr[j-1]>arr[j]){
			swap(&arr[j] , &arr[j-1]);
			j--;
		
	}}
	float time_end1=clock();
	float time1=(time_end1-time_st1) / CLOCKS_PER_SEC;
	printf("Time in insertion sort : %f \n",time1);
}
int quicksort(int arr[] ,int low,int size){
	float time_st=clock();
	int high=size;
	if(low<=high){
		for(int i=0;i<=high-1;i++){
			if(arr[i]>arr[high]){
				swap(&arr[i],&arr[high]);
			}
			swap(&arr[i + 1], &arr[high]);
		}	
		for(int j=0;j<size;j++){
		}
		
	}
	float time_end=clock();
	float time=(time_end-time_st) / CLOCKS_PER_SEC;
	printf("Time in quick sorting : %f",time);
}
int main(){
	int arr[100000];
	for(int i=0;i<100000;i++){
		arr[i]=rand()%100;
	}
	int size=sizeof(arr)/sizeof(arr[0]);
	insertionsort(arr, size);
	quicksort(arr,0,size-1);
}
