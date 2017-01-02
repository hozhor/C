#include "stdio.h"
#include "time.h"
void main()
{ time_t lt; /*define a longint time varible*/
lt=time(null);/*system time and date*/
printf(ctime(<)); /*english format output*/
printf(asctime(localtime(<)));/*tranfer to tm*/
printf(asctime(gmtime(<))); /*tranfer to greenwich time*/
}
