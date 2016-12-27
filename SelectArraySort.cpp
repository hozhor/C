#include<stdio.h>
int sort(int array[],int n);
int main (){
	int a[10]={43,32,5,42,61,4,7,9,13,42};
	for (int i=0;i<10;i++){
	printf("%5.2d ",a[i]);
	}
	printf("\n");
	sort(a,10);
	for (int i=0;i<10;i++){
	printf("%5.2d ",a[i]);
	}
	printf("\n");	
return 0;
}

int sort(int array[],int n){
	int i,k,j,temp;
	for(i=0;i<n-1;i++){
		k=i;
		for(j=i+1;j<n;j++)
		if(array[j]<array[k])
		k=j;
		temp=array[k];
		array[k]=array[i];
		array[i]=temp;
		
		
		
	}
return 0;
}

