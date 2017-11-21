   #include<stdio.h>
   
   int main()
   {
       int mounth;
       puts("请输入月份");    scanf("%d",&mounth);
       switch(mounth){
               case 1:
               case 2:
              case 12: printf("%d月是冬季",mounth);break;
              case 3:
              case 4:
              case 5: printf("%d月是春季",mounth);break;
              case 6:
              case 7:
              case 8: printf("%d月是夏季",mounth);break;
              case 9:
              case 10:
              case 11: printf("%d月是秋季",mounth);break;
              default : printf("您输入的月份不存在");
     
         }
    return 0;
}
