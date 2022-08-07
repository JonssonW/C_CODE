#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int count_str(char* str)
{
	int count = 0;
	if (*str != '\0')
	{
		return 1 + count_str(str + 1);
		count++;
	}
	else
		return 0;
	printf("%d", count);
}

void re_string(char* str)
{
	int left = 0;
	int right = count_str(str)-1;
	while (left < right)
	{
		char tmp;
		tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[] = "abcdef";
	re_string(arr); //fedcba
	printf("%s\n", arr);
	return 0;
}