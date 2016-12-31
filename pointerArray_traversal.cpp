#include<stdio.h>
int main(){
int a[10];
int *p;
for (int i=0;i<10;i++){
	scanf("%d",&a[i]);
}
for (p=a;p<(a+10);p++){//数组名=数组首地址
printf("%5.2d\n",*p);//输出*p=a[i]

}
printf("\n");
return 0;
}
