#include <stdio.h>
int main(){
	int a[3][4]={{34,56,34,1},{3,0,98,76},{45,6,2,0}};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j <4 ; j++)
		{
			if (a[i][j]==0)
				continue;
			printf("%d		", a[i][j]);
		}
			printf("\n");

	}


return 0;
}

