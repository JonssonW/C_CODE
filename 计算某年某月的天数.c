#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 0;
	int m = 0;

	//1 3 5 7 8 10 12 == 31
	//4 6 9 11 == 30
	while ((scanf("%d %d", &n, &m)) != EOF)
	{
		switch (m)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				printf("31\n");
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				printf("30\n");
				break;
			case 2:
			{
					if (n % 400 == 0 || n % 4 == 0 && n % 100 != 0)
						printf("29\n");
					else
						printf("28\n");
			}	
		}
	}
	//2 
	//≈–∂œ»ÚƒÍ
	// « - 29
	//∑Ò - 28
	return 0;
}