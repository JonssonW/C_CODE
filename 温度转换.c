#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	double f = 0;
	double c = 0;
	scanf("%lf", &f);
	c = 5.0 / 9 * (f - 32);
	//����������������1��0,0��������˾�Ϊ0
	//�õ����Ϊ0.000�������Ҫ��5��9��Ϊ5.0��9.0
	printf("%.3f", c);
	return 0;
}