/*calculate time*/
#include "time.h"
#include "stdio.h"
main()
{ clock_t start,end;
int i;
double var;
start=clock();
for(i=0;i<10000;i++)
{ printf("\1\1\1\1\1\1\1\1\1\1\n");}
end=clock();
printf("\1: the different is %6.3f\n",(double)(end-start));
}
