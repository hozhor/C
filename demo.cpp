#include<stdio.h>
void multip(){
int i,j,result;
printf("\n");
for(i=1;i<=9;i++){
	for(j=1;j<=9;j++){
		result=i*j;
		printf("%4d*%4d=%-3d",i,j,result);
	}
		printf("\n");
}
}
void main(){
	multip();
getchar();getchar();getchar();getchar();
}