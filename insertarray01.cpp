/*一维数组中插入一个元素*/

#include <stdio.h>
int main (){
int a[]={0,1,2,3,4,5,6,7,8,9};
int i,j,k,t,temp,b;
for(i=0;i<9;i++){
	printf("%d ",a[i]);
}
printf("\n");
printf("下标：\n");
scanf("%d",&t);
printf("值:\n");
scanf("%d",&temp);

for(j=10;j>t;j--){
a[j]=a[j-1];
}
a[t]=temp;

for(i=0;i<10;i++){
	printf("%d ",a[i]);
}

printf("\n");
return 0;
}
