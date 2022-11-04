#include<stdio.h>
#include<stdlib.h>
int volume(int a, int b, int c)
{
	int p;
	p = a * b * c;
	return(p);
}
int main()
{
	int x, y, z, v;
	scanf_s("%d%d%d", &x, &y, &z);
	v = volume(x, y, z);
	printf("v=%d\n", v);
	system("pause");
	return 0;
}