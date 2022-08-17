#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char ch;
	while ((ch=getchar()) != EOF)  //(scanf("%c", &ch) != EOF) 
	{
		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
		{
			printf("YES");
			//getchar();
		}
		else
		{
			printf("NO");
			//getchar();
		}
		getchar();
	}
	return 0;
}

