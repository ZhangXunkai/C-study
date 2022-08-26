#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int input = 0;
	printf("你大学要好好学习吗？（好好学习输入1，不好好学习输入0）\n");
	scanf("%d",&input);
	if (input == 1)
	{
		printf("拿到好offer\n");
	}
	else
	{
		printf("回家卖红薯\n");
	}

	return 0;
}