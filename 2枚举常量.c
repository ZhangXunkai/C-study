//4 ö�ٳ�����һ�����ڿ���һһ�оٵĳ�������
#include <stdio.h>
enum Gender
{
	//����ö�����ͱ�����δ������ȡֵ��
	//��������ֵ����ö�ٳ�����
	MALE,//�����ں���Ӹ���=ĳ���֡������Ǹ�MALE����ֵ�����������ֵ��MALE��ֵĬ��Ϊ0
	FEMALE,
	SECRET
};
int main()
{
	enum Gender g = MALE;
	printf("%d\n",MALE);//��������0
	printf("%d\n", FEMALE);//��������1
	printf("%d\n", SECRET);//��������2
	return 0;
}