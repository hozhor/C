#include "stdio.h"
main()
{
int i=5;
void palin(int n);
printf("\40:");
palin(i);
printf("\n");
}
void palin(n)
int n;
{
char next;
if(n<=1)
　{
　next=getchar();
　printf("\n\0:");
　putchar(next);
　}
else
　{
　next=getchar();
　palin(n-1);
　putchar(next);
　}
}
