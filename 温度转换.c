#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	double f = 0;
	double c = 0;
	scanf("%lf", &f);
	c = 5.0 / 9 * (f - 32);
	//整数相整除，不足1得0,0与其他相乘均为0
	//得到结果为0.000，解决需要把其中一个int 改为 float类型，即5或9改为5.0或9.0
	printf("%.3f", c);
	return 0;
}
