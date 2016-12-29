#include<stdio.h>
int main(){
int a,b,*p,*q,*temp;
scanf("%d,%d",&a,&b);
p=&a;q=&b;
if (a<b){
temp=p;
p=q;
q=temp;
}
printf("  a=%-5.2d  b=%-5.2d\n\n",a,b);
printf("max=%-5.2dmin=%-5.2d\n",*p,*q);


return 0;
}
