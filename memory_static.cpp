#include<stdio.h>
int f();/*对函数f()进行声明*/
int main (){
	for(int i=0;i<3;i++)
		printf("%d \n",f());/*调用函数f()*/
	return 0;
}
int f(){
	static int STATIC=2;	/*静态存储类型static*/
	STATIC+=1;

}
