#include<stdio.h>
int main(){
char ch1,ch2;
printf("请输入：\n");
scanf("%c",&ch1);
if(ch1>=97){/*ASCII大写字母的值为：65～９０，小写字母为　：　97～122*/
ch2=ch1-32;
}else{
ch2=ch1+32;
}
printf("%c \n",ch2);
return 0;
}
