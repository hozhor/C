#include <stdio.h>
int main(){
	int j=0;
    char retry = 'Y';

    while(j<10){
		printf("%d\n",j);
		
    printf("是否继续（Y/N）\n");

    scanf("%c",&retry);
    if(retry == 'N'){break;}

	j++;
	}
return 0;	
}

