#include <stdio.h>
void hello_world(void)
{
printf("hello, world!\n");
}
void three_hellos(void)
{
int counter;
for (counter = 1; counter <= 3; counter++)
hello_world();/*调用此函数*/
}
void main(void)
{
three_hellos();/*调用此函数*/
}
