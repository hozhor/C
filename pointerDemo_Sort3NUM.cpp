#include<stdio.h>
int exchange(int *q1,int *q2,int *q3);
int swap(int *qt1,int *qt2);
int main(){
int a,b,c,*p1,*p2,*p3;
scanf("%d,%d,%d",&a,&b,&c);
p1=&a;
p2=&b;
p3=&c;
exchange(p1,p2,p3);/*实参是a,b,c的值*/
printf("%d,%d,%d\n",a,b,c);
return 0;
}
int exchange(int *q1,int *q2,int *q3){ 
if(*q1<*q2){/*a,b*/
swap(q1,q2);
}
if(*q1<*q3){/*a,c*/
swap(q1,q3);
}
if(*q2<*q3){/*b,c*/
swap(q2,q3);
}
return 0;
}
int swap(int *qt1,int *qt2){
int temp;
temp=*qt1;
*qt1=*qt2;
*qt2=temp;
return 0;
}
