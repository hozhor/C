#include<stdio.h>
int main(){
int a[]={1,2,3,0,2,0,0,0,0};
int i,j,k,t=0;
for(i=0;i<9-t;i++){
	for(j=i+1;j<=9-t;j++){
		if(a[j]==a[i]){
					
			for(k=j+1;k<9-t;k++){
			a[k-1]=a[k];}
			t++;
		}
	}		

}
for(i=0;i<9-t;i++)
	printf(" %d ",a[i]);
printf("\n");
return 0;
}
