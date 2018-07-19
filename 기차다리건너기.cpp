#include<stdio.h>

void main()
{
	int max_Weight, length;

	scanf("%d", &max_Weight);
	scanf("%d", &length);

	int sum;
	int i;
	int block_Weight[100];

	for (i = 0; i < length; i++) {
		scanf("%d", &block_Weight[i]);
	}

	if (length < 4) {
		sum = 0;
		for (i = 0; i < length; i++) {
			sum += block_Weight[i];
			if (sum > max_Weight) {
				printf("%d", i);
				return;
			}
		}
	}
	else {
		for (i = 0; i < length - 3; i++) {
			sum = 0;
			int j;
			for (j = i; j < i + 4; j++) {
				sum += block_Weight[j];
				if (sum > max_Weight) {
					printf("%d", j);
					return;
				}
			}
		}
	}

	printf("%d", length);
}