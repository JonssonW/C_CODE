#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//转义字符 - 转变了它原来的意思
//int main()
//{
//	printf("c:\test\test.c");			//输出的结果\t 无法正常输出 被转变为TAB键
//	printf("ab\ncd");					    //\n被转义为换行
//	printf("%c\n", '\'');			  	//%c 打印字符  加\就可以单独输出 '
//	printf("%s\n", "\"");			  	//%s 打印字符串 加\就可以单独输出 "
//	//%d 打印整型
//	return 0;
//}
//int main()
//{
	//printf("%c\n", '\101');                               //A - 65 -8进制是：101
	//printf("%c\n", '\x30');                               //48- ‘0’  十六进制 3*16^1=48
	//ASCII码值  A是65 0是48
	//printf("%d\n", strlen("c:\test\328\test.c"));         //  \t算作一个字符， \32代表2个八进制数字 算作一个字符
	//八进制中，是0-7 没有8
	//\ddd    ddd表示1~3个八进制的数字。 如： \130 X
	//\xdd    dd表示2个十六进制的数字。 如： \x30 0
	//printf("%d\n", strlen("abcdef"));
	//printf("%d\n", strlen("c:\test\628\test.c"));
	//return 0;
//}
