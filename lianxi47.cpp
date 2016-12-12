#include <stdio.h>
int main(){
	int mark , i ;
	float aver;
	aver = 0;
	for ( i = 0; i < 20; i++)
	{
		printf("please input %dth student scoure\n",i );
		scanf("%d",&mark);
		aver+=mark;
	}
	aver=aver/20;
	printf("averge scoure is %f\n",aver );


	return 0;
}