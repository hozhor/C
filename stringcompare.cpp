#include<stdio.h>
#include<string.h>
int main(){
char str1[30]={'a','n','w','e','r'};
char str2[30];
scanf("%s",str2);
puts(str1);
puts(str2);
printf("两个数组的内容一样吗?:\n");
if(strcmp(str1,str2)==0)/*strcmp*/
printf("是一样\n");
else
printf("不一样\n");






return 0;
}
