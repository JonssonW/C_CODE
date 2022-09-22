#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int five(int a)
{
	int b = 0;
	b = (a / 10000) * (a % 10000) + (a / 1000) * (a % 1000) + (a / 100) * (a % 100) + (a % 10) * (a / 10);
	return b;
}
int four(int a)
{
	int b = 0;
	b = (a / 1000) * (a % 1000) + (a / 100) * (a % 100) + (a % 10) * (a / 10);
	return b;
}
int three(int a)
{
	int b = 0;
	b = (a / 100) * (a % 100) + (a % 10) * (a / 10);
	return b;
}

int main()
{
	//5位数中：不考虑3位数以下的数
	//(a/10000) * (a%10000)
	//(a/1000) * (a%1000)
	//(a/100) * (a%100)
	//(a%10) * (a/10)
	int i = 0;
	for (i = 100; i <= 99999; i++)
	{
		if (i>9999 && i<100000)
		{
			if (five(i) == i)
				printf("%d ", i);
		}
		else if (i>999 && i<10000)
		{
			if (four(i) == i)
				printf("%d ", i);
		}
		else
		{
			if (three(i) == i)
				printf("%d ", i);
		}
	}

	return 0;
}









