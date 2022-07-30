#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);
	int max = 0; // 假设m，n的较小值为最大公约数
	if (m > n)
	{
		max = n;
	}
	else
	{
		max = m;
	}

	while (1)
	{
		if (m % max == 0 && n % max == 0)
		{
			printf("最大公约数为： %d\n",max);
			break;
		}
		max--;
	}

	return 0;
}

