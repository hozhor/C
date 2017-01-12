#include<stdio.h>

int f(int a[],int n);

int main(){
int a[]={1,5,7,6,4,3,4,9,8};

f(a,9);
for(int i=1;i<10;i++)
printf("%5d",a[i]);
return 0;
}

int f(int a[],int n){
int q,temp;
if(n%2==0)
q=n/2;
else
q=n/2+1;
for(int i=0;i<q;i++)
{
temp=a[i];
a[i]=a[n-i];
a[n-i]=temp;

}



return 0;
}
