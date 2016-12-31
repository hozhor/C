#include<stdio.h>
int f(int *x,int n);
int main(){
int a[10];
for (int i=0;i<10;i++){
printf("please input %d th number:\n",i);
scanf("%d",&a[i]);
}
printf("\n the array has been inverted:\n");
f(a,10);
for(int i=0;i<10;i++){
printf("%5.3d",a[i]);

}
printf("\n");
return 0;
}
int f(int *x,int n){
int *p,temp,*i,*j,m=(n-1)/2;
i=x;j=x+n-1;p=x+m;
for(;i<=p;i++,j--){
temp=*i;
*i=*j;
*j=temp;
}



return 0;
}
