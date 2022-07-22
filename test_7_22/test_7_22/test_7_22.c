#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//转义字符 - 转变了它原来的意思
//int main()
//{
//	printf("c:\test\test.c");			//输出的结果\t 无法正常输出 被转变为TAB键
//	printf("ab\ncd");					//\n被转义为换行
//	printf("%c\n", '\'');				//%c 打印字符  加\就可以单独输出 '
//	printf("%s\n", "\"");				//%s 打印字符串 加\就可以单独输出 "
//	//%d 打印整型
//	return 0;
//}