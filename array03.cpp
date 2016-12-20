#include <stdio.h>
int main(){
	int a[]={0,1,2,3,4,5,6};
	int b[10];
	for (int i=0;i<7;i++){
		printf("%d ",a[i]);	
	}
	printf("\n");
	for (int i=0; i<7 ;i++){
		printf("please input b[%d]",i);
		scanf("%d",&b[i]);	
		a[i]+=b[i];	
		}

for (int i=0;i<7;i++){
		printf("%d ",a[i]);	
	}
return 0;
}
