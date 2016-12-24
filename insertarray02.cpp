#include<stdio.h>
int main(){
int a[10][4]={{001,65,56,45},{002,34,55,41},{003,23,46,65},{004,12,32,35},{005,12,56,45}};
int i,j,k,l=0;
char ch;
for (i=0;i<5;i++){
	for (j=0;j<4;j++){
		printf("%d  ",a[i][j]);
	}
printf("\n");
}


printf("你要插入第几行：\n");
scanf("%d",&k);

for (i=5+1;i>k;i--){

		
	
	for (j=0;j<4;j++)
	a[i][j]=a[i-1][j];
	
}
for(j=0;j<4;j++){
printf("input num\n");															
scanf("%d",&a[k][j]);
}

for (i=0;i<5+1;i++){
for (j=0;j<4;j++){
printf("%d  ",a[i][j]);
}
printf("\n");
}

	
return 0;
}
