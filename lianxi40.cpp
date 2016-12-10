#include 
void main(void)
{
int color;
for (color = 1; color < 16; color++)
　{
　textcolor(color);/*设置文本颜色*/
　cprintf("this is color %d\r\n", color);
　}
textcolor(128 + 15);
cprintf("this is blinking\r\n");
}
