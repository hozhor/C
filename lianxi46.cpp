#include <stdio.h>
int main(){
float x ,amax,amin;
scanf("%f",&x);
amax = x ;
amin = x ;
while(x>0){
if (x<amin){
	amin = x;
}if(x>amax){
	amax = x;
}
scanf("%f",&x);
}
printf("amax=   %f  amin=      %f  \n",amax,amin );

return 0;

}