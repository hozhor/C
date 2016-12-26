#include<stdio.h>
#include <string.h>
int main(){
char str1[50]={'a','n','w','e','r'};
char str2[45];
gets(str2);
strcpy(str1,str2);/*strcpy有两个参数,把str2复制到str1中,复制时会直接覆盖掉*/
puts(str1);
return 0;}
