#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n;
	scanf("%d", &n);

	int i;
	int * count = (int*)malloc(n * sizeof(int));
	printf("%d개 숫자를 입력: ", n);
	for (i = 0; i < n; i++) {
		scanf("%d", &count[i]);
	}
	for (i = 0; i < n; i++) {
		printf("%d ", count[i]);
	}
	printf("\n");
	for (i = 0; i < n; i++) {
		int j = i-1;
		while (j != -1) {
			if (count[j] > count[j + 1]) {
				int temp = count[j];
				count[j] = count[j + 1];
				count[j + 1] = temp;
			}
			j--;
		}
		for (j = 0; j <= i; j++) {
			printf("%d ", count[j]);
		}
		printf("\n");
	}
}