#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	float a = 0;
	scanf("%f", &a);
	while (a > 0 && a <= 200)
	{
		if (a >= 100 && a <= 200)
		{
			printf("%d\n", ((int)a % 100) % 10);     //转换函数类型
			break;
		}
		else
		{
			printf("%d\n", (int)a % 10);
			break;
		}
	}

	return 0;
}