#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	long long  m = 0;
	long long  n = 0;
	scanf("%lld %lld", &m, &n);
	long long t = 0;
	long long  m1 = m;
	long long  n1 = n;
	//最大公约数
	//大数除以小数（再除以余数） 直到余数为0
	if (m<n)
	{
		t = m;
		m = n;
		n = t;
	}
	while (n != 0)
	{
		t = m%n;
		m = n;
		n = t;
	}
	//m即为最大公约数
	
	

	//最小公倍数
	//两数相乘 再除以最大公约数
	long long i = 0;
	i = m1*n1 / m;
	long long sum = 0;
	sum = m + i;
	printf("%lld", sum);
	return 0;
}
