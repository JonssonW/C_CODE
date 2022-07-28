#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	do
	{
		//if (i == 6)
		//break;    跳出整个循环
		//continue; 跳过本次循环剩余部分，继续整个循环，但是在do while循环中卡在6  无法输出

		printf("%d ", i);
		i++;
	} while(i<=10);
	return 0;
}



n!
int main()
{
	int n = 0;
	int i = 0;
	int ret = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret *= i;
		
	}
	printf("%d\n", ret);

	return 0;
}

//计算 1!+ 2!+ 3!+ …… + 10!
int main()
{
	int n = 1;
	int i = 0;
	int ret = 1;
	int sum = 0;
	while (n <= 3)
	{
		ret = 1;//计算n！的阶乘之前，把ret初识为1;
		for (i = 1; i <= n; i++)
		{
			ret *= i;
		}
		n++;
		sum += ret;
	}
	printf("%d\n", sum);

	return 0;
}
