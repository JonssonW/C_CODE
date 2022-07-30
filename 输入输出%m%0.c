#define _CRT_SECURE_NO_WARNINGS 1
//输入只有一行，出生日期，包括年月日，年月日之间的数字没有分隔符。 20130225
//三行，第一行为出生年份，第二行为出生月份，第三行为出生日期。输出时如果月份或天数为1位数，需要在1位数前面补0
//通过scanf函数的%m格式控制可以指定输入域宽，输入数据域宽（列数），按此宽度截取所需数据；
//通过printf函数的%0格式控制符，输出数值时指定左面不使用的空位置自动填0。
//通过printf可以使用使用格式控制串“%md”输出域宽为m的十进制整数。
#include <stdio.h>
int main()
{
	int year = 0;
	int month = 0;
	int date = 0;
	scanf("%4md%2md%2md", &year, &month, &date);
	printf("year=%d\n", year);
	printf("month=%02d\n", month);
	printf("date=%02d\n", date);
	return 0;
}

