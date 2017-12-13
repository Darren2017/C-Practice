#include<stdio.h>

void swap(int *px, int *py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}

void sort3(int *n1, int *n2, int *n3)
{
	int max = *n1;
	int cen = *n2;
	int min = *n3;
	int temp;
	if(cen > max){
		swap(&max, &cen);
	}	
	if(min > max){
		swap(&max, &min);
	}
	if(min > cen){
		swap(&min, &cen);
	}
}

int main()
{
	int a, b, c;
	printf("请输入三个正整数：\n");
	scanf("%d %d %d", &a, &b, &c);
	sort3(&a, &b, &c);
	printf("%d %d %d", a, b, c);
	
	return 0;
}
