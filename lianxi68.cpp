#define n 4
#include "stdio.h"
static struct man
{ char name[20];
int age;
} person[n]={"li",18,"wang",19,"zhang",20,"sun",22};
main()
{struct man *q,*p;
int i,m=0;
p=person;
for (i=0;i{if(mage)
　q=p++;
　m=q->age;}
printf("%s,%d",(*q).name,(*q).age);
}
