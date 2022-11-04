#include<stdio.h>
#include<stdlib.h>
int main() {
	int i,j,m,n, N,num[1000];
	scanf_s("%d", &N);
	for (m = 0; m < 1000; m++)
	{
		num[m] = 0;
	}
	for ( i =1; i <=N; i++)
	{
		for (j = 1; j <= N; j++)
		{
			if (j % i == 0)
				num[j-1] += 1;
		}
	}
	for (n = 0; n < 100; n++)
	{
		if (num[n] % 2 == 1)
			printf("%d\n", n+1);
	}
	return 0;
}