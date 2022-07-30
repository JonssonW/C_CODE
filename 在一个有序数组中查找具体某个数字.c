#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 8;
	
	int sz = (sizeof(arr)/ sizeof(arr[0]));
	int left = 0;
	int right = sz-1;
	
	while (left <= right)
	{

		int mid = ((left + right) / 2); //必须在循环内 
		if (arr[mid] < arr[i])
		{
			left = mid + 1;
		}
		else if (arr[mid] < arr[i])
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了:%d \n", mid);
			break;
		}
	}
	if (left>right)
	{
		printf("找不到\n");
	}
	return 0;
}