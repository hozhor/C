#include<stdio.h> 
void main()
{
char letter;
printf("please input the first letter of someday\n");
while ((letter=getch())!='y')/*当所按字母为y时才结束*/
{ switch (letter)
{case 's':printf("please input second letter\n");
　　　　　if((letter=getch())=='a')
　　　　　　printf("saturday\n");
　　　　　else if ((letter=getch())=='u')
　　　　　　　　　printf("sunday\n");
　　　　　　　else printf("data error\n");
　　　　　break;
case 'f':printf("friday\n");break;
case 'm':printf("monday\n");break;
case 't':printf("please input second letter\n");
　　　　　if((letter=getch())=='u')
　　　　　　printf("tuesday\n");
　　　　　else if ((letter=getch())=='h')
　　　　　　　　　printf("thursday\n");
　　　　　　　else printf("data error\n");
　　　　　break;
case 'w':printf("wednesday\n");break;
default: printf("data error\n");
　　}
　}
}
