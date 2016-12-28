#include<stdio.h>
#define PI 3.1415926/*不带参数的宏定义*/
int main(){
float s,r,l,v;
printf("input r:\n");
scanf("%f",&r);
s=PI*r*r;
v=4.0/3*PI*r*r*r;
l=2.0*PI*r;
printf("s=%10.3f v=%10.3f l=%10.3f\n",s,v,l);



return 0;
}
