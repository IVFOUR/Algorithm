#include<stdio.h>

void quick(int data[], int start, int end);

void change(int data[],int a, int b);

void main()
{
	int data[] = { 1,10,5,8,7,6,4,3,2,9 };
	int i, j;
	quick(data, 0, 9);
	
	for (i = 0; i < 10; i++)
		printf("%d ", data[i]);
}

void quick(int data[], int start, int end)
{
	int i, j, pivot;
	pivot = start;
	i = start + 1;
	j = end;
	if (start >= end) return;
	while (i <= j) {
		while (i < end && data[i] <= data[pivot]) {
			i++;
		}
		while (j > start && data[j] >= data[pivot]) {
			j--;
		}
		if (i >= j) {
			// ¾ù°¥·ÇÀ¸¸é
			change(data, pivot, j);
		}
		else {
			change(data, i, j);
		}
	}
	quick(data, start, j - 1);
	quick(data, j + 1, end);
}

void change(int data[], int a, int b)
{
	int temp;
	temp = data[a];
	data[a] = data[b];
	data[b] = temp;
}