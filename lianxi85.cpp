#include "stdio.h"
#define m 5
main()
{int a[m]={1,2,3,4,5};
int i,j,t;
i=0;j=m-1;
while(i{t=*(a+i);
*(a+i)=*(a+j);
*(a+j)=t;
i++;j--;
}
for(i=0;iprintf("%d",*(a+i));
}
