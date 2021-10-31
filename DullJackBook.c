#include<stdio.h>
int main() {

	int T, tc, N, K, i;
	long long result;

	scanf("%d", &T);
	for (tc = 1; tc <= T; tc++)
	{
		result = 1;
		scanf("%d%d", &N, &K);

		for (i = 1; i < N; i++)
		{
			result = (result * K) ;
		}

		printf("%d", result);
	}

	return 0;
}
