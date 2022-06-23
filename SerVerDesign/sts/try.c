#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a=19;
	int ab[3] = {20, 30, 50};
	int b=120;

	int c=a+b;
	int d=a*b;

	printf("\nValue of a and b are - ");
	printf("\nA = %d\nB = %d", a, b);

	printf("\nC = %d ", c);

	printf("\nD = %d ", d);

	for(int i=0;i<5;i++)
	{
		printf("%d\n", ab[i]);
	}

	return 0;
}


