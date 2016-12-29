#include<stdio.h>
int main (){
int a,b;
int *a_pointer,*b_pointer;/*定义指向整形变量的指针变量a_pointer ,b_pointer*/
a=100;
b=200;
a_pointer=&a;/*把变量a的地址赋值给指针变量a_pointer*/
b_pointer=&b;/*把变量b的地址赋值给指针变量b_pointer*/
printf("%5.2d %5.2d\n",a,b);
printf("%5.2d %5.2d\n",*a_pointer,*b_pointer);
return 0;
}
