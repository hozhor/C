#include<stdio.h>
int main(){
int n=13;
int q;
for (int i=0;n!=0;i++)
{
q=n%2;//求余数
n/=2;
if(q==1) printf(" %d  ",i);
}
printf("\n");
return 0;
}
