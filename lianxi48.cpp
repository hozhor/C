#include <stdio.h>
int main (){
	int mark[20], t=0;
	float aver=0;
	for (int i = 0; i < 20; ++i)
	{
		printf("student %d th \n",i+1 );
		scanf("%d",&mark[i]);
		aver += mark[i];
	}
	aver=aver/20;	
	for (int i = 0; i < 20; i++)
	{
		if (aver<=mark[i])
		{
			
			t++;
		}

	}
		printf(" average scoure is %f\n",aver );
		printf("The number of above average grades is %d\n  ",t );
	return 0 ;

}	