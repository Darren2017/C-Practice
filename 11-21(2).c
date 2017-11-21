#include<stdio.h>

int main()
{
	int month;
	puts("请输入月份：");  scanf("%d",&month);
	if(month>=3 && month<=5){
		printf("%d月是春季",month);
	} 	else{
			if(month>=6 && month<=8){
				printf("%d月是夏季",month);
			}	else{
					if(month>=9 && month<=11){
						printf("%d月是秋季",month);
					}	else{
							if(month==1 || month==2 || month==12){
								printf("%d月是冬季",month);
							}	else {puts("您输入的月份不存在\a\a");
								}
						}
			
				}
	

		}
	return 0;
}
