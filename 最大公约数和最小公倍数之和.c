#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	long long  m = 0;
	long long  n = 0;
	scanf("%lld %lld", &m, &n);
	long long m1 = m;
	long long n1 = n;
	long long y = 0;
	//最大公约数
	//大数除以小数（再除以余数） 直到余数为0
	while (m>n)
	{
		if (m%n != 0)
			n = m%n;
		else
		{
			y = n;
			break;
		}
	}
	while (m < n)
	{
		if (n%m != 0)
			m = n%m;
		else
		{
			y = m;
			break;
		}
	}
	

	//最小公倍数
	//两数相乘 再除以最大公约数
	long long b = 0;
	b = m1*n1 / y;
	
	
	long long sum = 0;
	sum = y + b;
	printf("%lld", sum);
	return 0;
}
