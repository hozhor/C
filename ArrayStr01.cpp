#include<stdio.h>
int fun(char *p);
int main(){
char *c={"asdsafsAAwQ12!"};
fun(c);

return 0;
}

int fun(char *p){
int ABC=0;
int abc=0;
int num=0;
int space=0;
int other=0;
while(*p!=0){
	if(*p>='A'&& *p<='Z')
		ABC++;
	else if(*p>='a'&& *p<='z')
		abc++;
	else if(*p>='0'&& *p<='9')
		num++;
	else if(*p==' ')
		space++;
	else 
		other++;
	p++;
}
printf("大写:%d \n小写:%d\n 数字:%d\n 空格:%d\n 其他:%d\n",ABC,abc,num,space,other);





return 0;
}
