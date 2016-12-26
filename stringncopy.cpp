#include<stdio.h>
#include<string.h>
int main(){
char str1[50]={'h','o','z','h','o','r'};
char str2[45];
scanf("%s",str2);/*输入字符串时不输入&地址符号*/
strncpy(str1,str2,3);/*复制3个字符*/
printf("%s",str1);






return 0;
}
