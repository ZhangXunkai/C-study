//程序输出什么？
#include <stdio.h>

int main()
{
	printf("%d\n",strlen("abcdef"));//6
	// \32被解析成一个转义字符
	printf("%d\n",strlen("c:\test\328\test.c"));//14

	return 0;
}