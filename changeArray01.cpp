#include<stdio.h>
int main(){
int a[]={0,1,2,3,4,5,6,7,8,9};
int i,j,k,l;
for (i=0;i<10;i++){
printf("%d  ",a[i]);


}
printf("输入你要修改的元素的下标：\n");
scanf("%d",&k);
printf("输入要修改的数：");
scanf("%d",&l);
for(i=0;i<10;i++)
{
if(i==k){
a[i]=l;
}
printf("%d  ",a[i]);

}

return 0;
}
