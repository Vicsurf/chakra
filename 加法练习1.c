#include <stdio.h>
int main()
{
	int num1 = 10;//�ӷ�����
	int num2 = 0;
	int sum = 0;//�ѱ�����д��ǰ�� д��һ�� ����Ҫ�����ڴ������ǰ��
	//�������� ��scanf_s  !!!!!!!!!!!
	scanf_s("%d%d", &num1, &num2);//&ȡ��ַ����      
	sum = num1 + num2;
	printf("sum=%d\n", sum);//��ӡ���
	return 0;
}