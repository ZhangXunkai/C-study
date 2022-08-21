#include <stdio.h>
#include <string.h>

int main()
{
	// \0是字符串的转义字符，作用为终止字符串，其存在非常之重要
	char arr1[] = "abc";//监视显示内含4个字符：a、b、c、\0,\0是字符串的结束标志，\0在字符串结尾处是隐藏的。
	char arr2[] = {'a','b','c'};//监视显示内含3个字符：a、b、c， 没有\0这个转义字符。
	char arr3[] = {'a','b','c','\0'};//对照组，比arr2多了一个转义字符\0

	printf("%s\n",arr1);//打印结果是abc
	printf("%s\n",arr2);//打印结果是abc以及一些乱码
	printf("%s\n",arr3);//打印结果是abc，额外添加了一个\0转义字符后，arr2的乱码消失了

	//求字符串长度：
	int len = strlen("abc");
	printf("%d\n",len);

	printf("%d\n",strlen(arr1));//打印结果是3
	printf("%d\n",strlen(arr2));//打印结果是15(随机值)，因为arr2没有字符串终止转义字符\0，所以程序过了abc之后一直继续向后
	                            //寻找\0，直到找到第16个时，才发现了\0，所以打印出来的值为15
	printf("%d\n",strlen(arr3));//打印结果是3，因为arr3里添加了\0

	return 0;
}