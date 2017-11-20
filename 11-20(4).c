#include<stdio.h>

int main()
{
	int highth;
	puts("请输入您的身高");		scanf("%d",&highth);
	printf("您的标准体重是%.1f公斤",(highth-100)*0.9);
	
	return 0; 
	 
}
