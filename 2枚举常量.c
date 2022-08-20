//4 枚举常量（一般用于可以一一列举的常量。）
#include <stdio.h>
enum Gender
{
	//这种枚举类型变量的未来可能取值：
	//下面三个值就是枚举常量。
	MALE,//可以在后面加个“=某数字”，这是给MALE赋初值，如果不赋初值，MALE的值默认为0
	FEMALE,
	SECRET
};
int main()
{
	enum Gender g = MALE;
	printf("%d\n",MALE);//输出结果：0
	printf("%d\n", FEMALE);//输出结果：1
	printf("%d\n", SECRET);//输出结果：2
	return 0;
}