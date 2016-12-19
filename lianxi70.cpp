#include <stdio.h>
#include <math.h>
int main(){
int i,k,j,n=0;
for(i=101;i<300;i+=2){
	k=sqrt(i);
	for(j=2;j<=k;j++)
	if(i%j==0)
	break;
	if(j>=k+1){
	printf("%d ",i);
 n+=1;

}

if(n%10==0)
printf("\n");
}
return 0;

}
