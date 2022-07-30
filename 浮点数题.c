#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//输出一个浮点数，保留三位小数
int main()
{
	float a;
	scanf("%f", &a);
	printf("%.3f", a);
	return 0;
}

//四舍五入
int main() {
	float d;
	scanf("%f", &d);
	printf("%.0f", d);
	return 0;
}

