#include<stdio.h>
#define MAX_COUNT 1001
int main()
{
	int N, K;
	int i, j;
	int cur_Count = 0;
	int count[MAX_COUNT];

	scanf("%d %d", &N, &K);
	for (i = 2; i < N; i++) {
		if (count[i] == 0)	continue;
		count[i] = 0;
		for (j = 2*i; j <= N; j += i) {
			if (count[j] == 0)
				continue;
			count[j] = 0;
			++cur_Count;
			if (cur_Count == K) {
				printf("%d", j);
				return;
			}
		}
	}

	return;
}