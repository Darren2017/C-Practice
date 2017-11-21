#include<stdio.h>

int main()
{
	int A,B,C;
	puts("请输入三个整数");   scanf("%d %d %d",&A,&B,&C);
	if(A==B&&B==C){
		puts("三个值都相等"); 
	}	else{
			if(A==B||B==C||A==C){
				puts("有两个值相等"); 
			}	else{
				puts("三个值都不相等");
				}
		}
	 return 0; 
}
