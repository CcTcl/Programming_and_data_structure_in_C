#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define M 129000

void Swap(int arr[], int i, int j){
	int temp = *(arr+i);
	*(arr+i) = *(arr+j);
	*(arr+j) = temp;
}

void selectionSort(int arr[]){
	int i, j, min;
	for(i=0; i<M; i++){
		min = i;
		for(j=i+1; j<M; j++){
			if(arr[j] < arr[min]){
				min = j;
			}
		}
		Swap(arr, min, i);
	}
	return;
}

void insertSort(int arr[]){
	int i, j, temp;
	for(i=1; i<M; i++){
		j = i-1;
		temp = arr[i];
		while(temp<arr[j] && j>=0){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
	}
}

void bubbleSort(int arr[]){
	int i, j;
	for(i=M-1; i>0; i--){
		for(j=0; j<i; j++){
			if(arr[j]>arr[j+1]){
				Swap(arr, j, j+1);
			}
		}
	}
}

int Partation(int arr[], int front, int rear){
	int low = front+1;
	int high = rear;
	while(low < high){
		while(arr[low]<arr[front] && low<rear){
			low++;
		}
		while(arr[high]>=arr[front] && high>front){
			high--;
		}
		if(low < high){
			Swap(arr, low, high);
		}
	}
	Swap(arr, front, high);
	return high;
}

void quickSort(int arr[], int front, int rear){
	if(front>=rear){
		return;
	}
	srand((unsigned int)time(NULL));
	int mid = rand()%(rear-front);
	Swap(arr, front, front+mid);
	mid = Partation(arr, front, rear);
	quickSort(arr, front, mid-1);
	quickSort(arr, mid+1, rear);
	return;
}

int main(){
	int sort1[M], sort2[M], sort3[M], sort4[M];
	int i;
	clock_t start, end;
	srand((unsigned int)time(NULL));
	
	for(i = 0; i < M; i++){
		sort1[i] = rand()*100+rand()%100;
	}
	memcpy(sort2, sort1, M*sizeof(int));
	memcpy(sort3, sort1, M*sizeof(int));
	memcpy(sort4, sort1, M*sizeof(int));
	
	printf("Data size: %d\n", M);
	
	start = clock();
	selectionSort(sort1);
	end = clock();
	printf("selectionSort uses %.3f seconds!\n", (double)(end - start)/CLOCKS_PER_SEC);
	
	start = clock();
	bubbleSort(sort2);
	end = clock();
	printf("bubbleSort uses %.3f seconds!\n", (double)(end - start)/CLOCKS_PER_SEC);
	
	start = clock();
	insertSort(sort3);
	end = clock();
	printf("insertSort uses %.3f seconds!\n", (double)(end - start)/CLOCKS_PER_SEC);
	
	start = clock();
	quickSort(sort4, 0, M-1);
	end = clock();
	printf("insertSort uses %.3f seconds!\n", (double)(end - start)/CLOCKS_PER_SEC);
	
	return 0;
}














