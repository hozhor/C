#include <stdio.h>
#include "math.h"
#define n 101
main()
{
int i,j,line,a[n];
for(i=2;ifor(i=2;i　for(j=i+1;j　{
　　if(a[i]!=0&&a[j]!=0)
　　if(a[j]%a[i]==0)
　　a[j]=0;}
printf("\n");
for(i=2,line=0;i{
　if(a[i]!=0)
　{printf("%5d",a[i]);
　line++;}
　if(line==10)
　{printf("\n");
line=0;}
}
}
