#include<stdio.h>
int main()
{
	int q = 0;
	for (q = 1; q <= 100; q++)
	{
		if (q % 5 == 0 && q % 3 == 0)
		{
			printf("麦叔 ");
		}
		else if (q % 3 == 0)
		{
			printf("麦 ");
		}
		else if (q % 5 == 0)
		{
			printf("叔 ");
		}
		else
		{
			printf("%d ", q);
		}
	}
	printf("\n");
	return 0;
}
#include <stdio.h>
int main()
{
	int q = 50;
	int w = 20;
	printf("交换前:q=%d w=%d\n", q, w);
	q = q ^ w;
	w = q ^ w;
	q = q ^ w;
	printf("交换后:q=%d w=%d\n", q, w);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int q = 0;
	int w = 0;
	int e = 0;
	scanf("%d", &q);
	for (w = 0; w < 32; w++)
	{
		if ((q>>w & 1) == 1)
		{
			e++;
		}
	}
	printf("%d中有%d个1\n", q, e);
	return 0;
}
