#include<stdio.h>

void swap(int *px, int *py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}

void sort3(int *n1, int *n2, int *n3)
{
	if(*n3 > *n1){
		swap(n3, n1);
	}	
	if(*n2 > *n1){
		swap(n1, n2);
	}
	if(*n3 > *n2){
		swap(n2, n3);
	}
}

int main()
{
	int a, b, c;
	printf("请输入三个正整数\n");
	scanf("%d %d %d", &a, &b, &c);

	sort3(&a, &b, &c);

	printf("%d %d %d\n", a, b, c);
	
	return 0;
}
