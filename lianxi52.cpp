/*circle*/
#include "graphics.h"
main()
{int driver,mode,i;
float j=1,k=1;
driver=vga;mode=vgahi;
initgraph(&driver,&mode,"");
setbkcolor(yellow);
for(i=0;i<=25;i++)
{
setcolor(8);
circle(310,250,k);
k=k+j;
j=j+0.3;
}
} 
