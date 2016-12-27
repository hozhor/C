#include<stdio.h>
int max(int array[][4]);
int main(){
	int a[3][4]={{48,65,32,15},{61,45,94,15},{16,23,18,94}};
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			printf("%5.2d",a[i][j]);/*先遍历*/
		}
	printf("\n");
	}
	printf("数组中最大的元素是:%d\n",max(a));/*调用函数max*/
return 0;
}

int max(int array[][4]){
	int max=array[0][0];/*设最大值为数组的第一个元素*/
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			if(array[i][j]>max)/*如果数组的某一个元素大于max,把呢个元素赋值给max*/
		    	max=array[i][j];
		}
	}



return max;/*返回值*/
}
