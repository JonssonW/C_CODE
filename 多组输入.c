#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 0;

	while (scanf("%d", &n)!=EOF)
	{
		if (n >= 60)
			printf("Pass\n");
		else
			printf("Fail\n");
	}
	return 0;
}