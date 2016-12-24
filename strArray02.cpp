#include<stdio.h>
int main(){
char c, string[81];
int word,num=0;
gets(string);
for(int i=0;(c=string[i])!='\0';i++){/*结束符＇＼0（零）＇*/
if(c==' '){word=0;}//出现空字符时单词为零
else if(word==0){word=1;num++;}//若前面没有单词，就算一个单词
}
printf("There are %d words in the line\n",num);

return 0;
}
