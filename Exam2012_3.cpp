#include<stdio.h>
float func(int n);
int q( int i);//函数声明
int main(){
	printf("%f\n",func(5));//调用函数
return 0;
}

float func(int n){
if(n==0)
	return 0;
else
	return (n/1.0/(q(n+1)*q(n+2))+func(n-1));//返回值内递归调用函数
}

int q( int i){
if(i==0)
return 1;
else 
return (i*q(i-1));//递归调用函数
}




