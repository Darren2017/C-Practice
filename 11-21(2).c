#include<stdio.h>

int main()
{
	int month;
	puts("�������·ݣ�");  scanf("%d",&month);
	if(month>=3 && month<=5){
		printf("%d���Ǵ���",month);
	} 	else{
			if(month>=6 && month<=8){
				printf("%d�����ļ�",month);
			}	else{
					if(month>=9 && month<=11){
						printf("%d�����＾",month);
					}	else{
							if(month==1 || month==2 || month==12){
								printf("%d���Ƕ���",month);
							}	else {puts("��������·ݲ�����\a\a");
								}
						}
			
				}
	

		}
	return 0;
}
