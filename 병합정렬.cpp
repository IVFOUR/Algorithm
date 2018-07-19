#include<stdio.h>
#include<stdlib.h>
int num = 8;

int size;
int sorted[8];
int count = 0;

void merge(int a[], int start, int middle, int end);
void mergeSort(int a[], int start, int end);

int main(void )
{
	int array[8] = { 7,6,5,8,3,5,9,1 };
	mergeSort(array, 0, num - 1);
	for (int i = 0; i < num; i++) {
		printf("%d ", array[i]);
	}
} 

void mergeSort(int a[], int start, int end)
{
	if (start < end) {
		int middle = (start + end) / 2;
		mergeSort(a, start, middle);
		mergeSort(a, middle + 1, end);
		merge(a, start, middle, end);
	}
}

void merge(int a[], int start, int middle, int end)
{
	int i = start;
	int j = middle + 1;	
	int k = start;

	while (i <= middle && j <= end) {
		if (a[i] <= a[j]) {
			sorted[k] = a[i];
			i++;
		}
		else {
			sorted[k] = a[j];
			j++;
		}
		k++;
	}

	if (i > middle) {
		for (int t = j; t <= end; t++) {
			sorted[k] = a[t];
			k++;
		}
	}
	else {
		for (int t = i; t <= middle; t++) {
			sorted[k] = a[t];
			k++;
		}
	}


	for (int t = start; t <= end; t++) {
		a[t] = sorted[t];
	}
}