#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int Max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = Max(a, b);
//	printf("%d\n", m);
//	return 0;
//}

//判断是否能被5整除
int main()
{
	int M = 0;
	scanf("%d", &M);
	if (M % 5 == 0)
		printf("%YES\n");
	else
		printf("%NO\n");
	return 0;
}