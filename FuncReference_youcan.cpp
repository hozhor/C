#include<stdio.h>

int max(int x,int y);/*对函数max进行声明*/
int main (){
int a,b;

scanf("%d%d",&a,&b);/*输入a,b的值*/

c=max(a,b);/*调用函数*/
printf("Max is %d\n",c);

return 0;
}
int max(int x,int y){
int z;
z=x>y? x: y;/*判断x和y的关系,那个大就把它赋值给z*/
return z;/*返回z*/
}

