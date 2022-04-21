#include <stdio.h>
#define M 7

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
	int sort1[M]={85,60,73,84,55,70,65};
	int sort2[M]={85,60,73,84,55,70,65};
	int sort3[M]={85,60,73,84,55,70,65};
	int sort4[M]={85,60,73,84,55,70,65};
	int i;
	
	printf("Before Sort:");
	for(i=0;i<M;i++){
		printf("%d  ", sort1[i]);
	}
	printf("\n");
	selectionSort(sort1);
	printf("After Sort:");
	for(i=0;i<M;i++){
		printf("%d  ", sort1[i]);
	}
	printf("\n\n");
	
	
	printf("Before Sort:");
	for(i=0;i<M;i++){
		printf("%d  ", sort2[i]);
	}
	printf("\n");
	bubbleSort(sort2);;
	printf("After Sort:");
	for(i=0;i<M;i++){
		printf("%d  ", sort2[i]);
	}
	printf("\n\n");
	
	
	printf("Before Sort:");
	for(i=0;i<M;i++){
		printf("%d  ", sort3[i]);
	}
	printf("\n");
	insertSort(sort3);
	printf("After Sort:");
	for(i=0;i<M;i++){
		printf("%d  ", sort3[i]);
	}
	printf("\n\n");
	
	
	printf("Before Sort:");
	for(i=0;i<M;i++){
		printf("%d  ", sort4[i]);
	}
	printf("\n");
	quickSort(sort4, 0, M-1);
	printf("After Sort:");
	for(i=0;i<M;i++){
		printf("%d  ", sort4[i]);
	}
	printf("\n\n");
	
	
	return 0;
}
