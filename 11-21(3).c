#include<stdio.h>

int main()
{
	int A,B,C;
	puts("��������������");   scanf("%d %d %d",&A,&B,&C);
	if(A==B&&B==C){
		puts("����ֵ�����"); 
	}	else{
			if(A==B||B==C||A==C){
				puts("������ֵ���"); 
			}	else{
				puts("����ֵ�������");
				}
		}
	 return 0; 
}
