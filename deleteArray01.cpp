/*一维数组中删除一个元素*/
#include<stdio.h>
int main(){
int a[]={0,1,2,3,4,5,6,7,8,9};
int t;
for (int i=0;i<10;i++){
	printf("%d ",a[i]);



}


printf("\n");
printf("输入要删除的数的下标：\n");
scanf("%d",&t);
for(int j=t;j<9;j++)
{
a[j]=a[j+1];

}

for(int i=0;i<9;i++)
printf("%d  ",a[i]);
return 0;
}
