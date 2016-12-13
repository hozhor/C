  #include<stdio.h>
int del(int p[][4],int q[],int n);/*声明*/
int main(){
	int i,j;
	int q[4];/*存放每行内删除的元素个数*/
	int a[4][4];/*待处理的二维数组*/
	for(i=0;i<4;i++)//输入数组
		for(j=0;j<4;j++)
			scanf("%d",&a[i][j]);
/*+++++++++++++++++++++++++++++++++++++++++++++++++++*/
	del(a,q,0);/*调用ｄｅｌ函数*/
	printf(" 					      　　存储结构\n");
	for ( i = 0; i < 4; i++){
    	for(j=0;j<4-q[i];j++){/*输出存储结构*/
       printf("  					         ---------\n");
			printf("					a[%d][%d]  |   %d  |\n",i,j,a[i][j] );/*输出*/

		}    
	}
	       printf("  				 	         ---------\n");
	printf("处理后的二维数组：\n");       
	for ( i = 0; i < 4; i++){ 
		printf("  	第%d行删除%d个元素     | ",i,q[i]);      
		for(j=0;j<4-q[i];j++){/*处理后的二维数组*/
			printf("%d  ",a[i][j] );/*输出*/
		}
		printf("\n");     
	}
}
/*++++++++++++++++++++++++++++++++++++++++++++++++++*/
int del(int p[][4],int q[] ,int n){/*删除所有含有零函数*/
	int i,j, l, k;
	for ( i = 0; i < 4; i++){
		k=0;
		for(j=0;j<4-k;j++){
			if(p[i][j]==n){
				k++;//记录零点个数
				for(l=j;l<4-k;l++)
					p[i][l]=p[i][l+1];//删除零点
					j--;
       			 }		
    		}
		q[i]=k;     	
	}
}
