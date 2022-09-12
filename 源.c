#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	float a[7] = { 0 };
	int i = 0, j = 0;
	int max = 0;
	int min = 0;
	
	while ((scanf("%f %f %f %f %f %f %f",&a[0],& a[1], &a[2], &a[3], &a[4], &a[5], &a[6])) != EOF)
	{
		getchar();
		float avg = 0, sum = 0;
		max = a[0];
		min = a[0];
		for (i = 1; i < 7; i++)
		{
			if (max < a[i])
				max = a[i];
			if (min > a[i])
				min = a[i];
		}
		
			for (j = 0; j < 7; j++)
			{
				sum += a[j];
			}
			avg = (sum - max - min) / 5.0;
			printf("%.2f", avg);
		
	}
		
	return 0;
}