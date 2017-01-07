#include<stdio.h>
int main(){
int i,j,flag;
int a[3][4]={{78,54,65,84},{95,78,96,72},{45,65,94,84}};
int (*q)[4];
q=a;
for(i=0;i<3;i++){
	flag=0;
	for(j=0;j<4;j++)
	if(*(*(q+i)+j)<60) flag=1;
	if(flag==1){
		for(j=0;j<4;j++)
		printf("%5.2d",*(*(q+i)+j));
	}


	printf("\n");


}
return 0;
}
