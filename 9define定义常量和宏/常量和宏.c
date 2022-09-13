#include <stdio.h>

//1.define定义常量：
//#define MAX 1000
//int main()
//{
//	printf("%d\n",MAX);
//	return 0;
//}

//2.define定义宏：
#define ADD(x,y) ((x)+(y))
int main()
{
	printf("%d\n",4*ADD(2,3));
	return 0;
}