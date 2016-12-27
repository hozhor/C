#include<stdio.h>
float average(float arrray[],int n);
float max=0,min=0;
int main(){
	/*1)输入成绩
	  2)找出最大最小和平均值
	  */
/*变量定义*/
float score[10],ave;
int i;
/*输入成绩*/
for(i=0;i<10;i++){
printf("请输入第%d学生的成绩:\n",i+1);
scanf("%f",&score[i]);
}
/*调用average*/
ave=average(score,10);
printf("最大值:%5.2f----最小值:%5.2f\n平均值:%5.2f\n",max,min,ave);

return 0;
}
/*找出最大最小平均值的函数max_min_average()*/
float average(float array[],int n){
	/*变量定义*/
	float sum=0,aver;
	int i,j,k;
	max=min=array[0];/*设最大最小值为数组的第一个元素*/
	for(i=0;i<n;i++){
		if(array[i]>max)
		max=array[i];
		else if(array[i]<min)
		min=array[i];
		sum+=array[i];
	}
	aver=sum/n;



return(aver);
}
