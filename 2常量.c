#include <stdio.h>

#define MAX 10000//MAX����define����ı�ʶ�����������д���Ҳ����д��main�����
int main()
{
	//1 ���泣����
	10;
	10.5;
	"abc";
	'a';

	//2 const���εĳ�������
	const int num = 20;//num���ǳ�����-���г����ԣ����ܱ��ı�����ԣ���num���ʻ���һ��������

	//3 #define����ı�ʶ��������
	int n = MAX;
	printf("n=%d\n",n);//��ӡ�����n=10000

	return 0;
}