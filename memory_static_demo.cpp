#include<stdio.h>
int f(int n);
int main(){
for(int i = 1;i<=5;i++){
printf("%d!=%d \n",i,f(i));/*调用函数*/
}
return 0;
}


/*解阶乘的函数f()*/
int f(int n){
static int a=1;
a*=n;/*计算阶乘的表达式*/

return a;
}
