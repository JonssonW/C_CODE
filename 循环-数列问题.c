#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	float a = 1.0, temp = 0;
	int flag = 1;
	int i = 0;
	if (n == 1)
	{
		printf("1.000");
	}
	if (n != 1)
	{
		for (i = 2; i <= n; i++)
		{
			if (i % 2 == 0)
			{
				flag = -1;
				temp = 1.0 / i;
				a = a + flag*temp;
			}
			else
			{
				flag = 1;
				temp = 1.0 / i;
				a = a + temp;
			}
		}
		printf("%.3f", a);
	}

	return 0;
}