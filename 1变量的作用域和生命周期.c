#include <stdio.h>
int g_val1 = 2021;//全局变量，作用域为整个工程。
extern int g_val2;//声明一下其他项目中的全局变量，本项目中才可以使用其他项目中的全局变量。
int main()
{
	printf("变量\n");
	{
		int a = 10;//局部变量，作用域为大括号内部。
	    printf("a = %d\n",a);
	}

	printf("%d %d",g_val1,g_val2);
	
	return 0;
}