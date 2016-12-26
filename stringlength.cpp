#include<stdio.h>
#include<string.h>
int main(){
char str1[300];
scanf("%s",str1);
printf("%d",strlen(str1));/*测试字符串的实际长度(不包括'\0')*/
return 0;
}
