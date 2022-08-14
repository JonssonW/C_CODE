#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//求n的位数
int  num(int x)
{
	if (x >= 10)
	{
		x = x / 10;
		return 1 + num(x);
	}
	else
		return 1;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int m = 0;
	int s = 0;
	int sum = 0;
	num(n);

	for (i = 0; i < num(n); i++)
	{
		//确定10^?
		m = pow(10.0, i);
		//得到末位
		s = n / m % 10;
		//改变末位
		if (s % 2 != 0)
			s = 1;
		else
			s = 0;

		//将改变的数字还原本来的位
		sum += s*m;
	}
	printf("%d\n", sum);
	return 0;
}