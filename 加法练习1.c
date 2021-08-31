#include <stdio.h>
int main()
{
	int num1 = 10;//加法运算
	int num2 = 0;
	int sum = 0;//把变量都写在前面 写在一起 变量要定义在代码块最前面
	//输入数据 用scanf_s  !!!!!!!!!!!
	scanf_s("%d%d", &num1, &num2);//&取地址符号      
	sum = num1 + num2;
	printf("sum=%d\n", sum);//打印输出
	return 0;
}