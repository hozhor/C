#include<stdio.h>
int swap(int *p1,int *p2);/*对函数swap进行声明*/
int main(){
	int a,b;
	int *pointer_1,*pointer_2;/*定义指向整形变量的指针变量*/
	scanf("%d,%d",&a,&b);/*输入a,b的值*/
	pointer_1=&a;/*把a的地址赋值给指针变量*/
	pointer_2=&b;
	if(a<b){ 
		swap(pointer_1,pointer_2);/*函数调用*/
	}
	printf("%d      %d\n",a,b);/*输出*/
	return 0;
}
int swap(int *p1,int *p2){
	int temp;/*定义一个整形变量*/
	temp=*p1;
	*p1=*p2;
	*p2=temp;
	return 0;
}
