#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		getchar();
		putchar(ch + 32);
		printf("\n");
	}
	return 0;
}