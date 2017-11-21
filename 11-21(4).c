#include<stdio.h>

int main()
{
	int A,B;
	puts("请输入两个整数");    scanf("%d %d",&A,&B);
	if((B-A>=0&&B-A<=10)||(A-B>=0&&A-B<=10)){
		puts("它们的差小于等于10");
	} 	else{
			puts("它们的差大于等于11");		
		}
	return 0;	
}
