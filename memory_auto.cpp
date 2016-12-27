#include<stdio.h>
int f();/*对函数f()进行声明*/
/*数据在内存中存储方式具体有四种:自动的(auto);静态的(static);寄存器的(register);外部的(extern)*/
int main(){
	for(int i=0;i<3;i++)
	printf("%d ",f());/*调用f()函数*/
return 0;
}

int f( ){
auto int a=2;/*定义一个存储类型为auto的,数据类型为int的变量a,其值为2*/
a+=1;/*自加*/
return a;
}
