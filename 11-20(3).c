#include<stdio.h>

int main()
{
	double a,b;
	printf("请输入两个整数：\n");
	printf("整数1：");    scanf("%lf",&a);
	printf("整数2：");   scanf("%lf",&b);
	printf("a的值是b的%.5f%%\n",a/(b*100.0));
	printf("sum=%09.5f",a+b); 
	
	return 0;
	 
	
	return 0;
}
