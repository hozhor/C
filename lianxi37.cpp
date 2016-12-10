#include <stdio.h>
void main(void)
{
int color;
for (color = 0; color < 8; color++)
　{ 
　textbackground(color);/*设置文本的背景颜色*/
　cprintf("this is color %d\r\n", color);
　cprintf("press any key to continue\r\n");
　getch();/*输入字符看不见*/
　}
}
