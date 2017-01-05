/*calculate time*/
#include "time.h"
#include "stdio.h"
main()
{ time_t start,end;
int i;
start=time(null);
for(i=0;i<3000;i++)
{ printf("\1\1\1\1\1\1\1\1\1\1\n");}
end=time(null);
printf("\1: the different is %6.3f\n",difftime(end,start));
}
