main()
{
int len;
char *str[20];
printf("please input a string:\n");
scanf("%s",str);
len=length(str);
printf("the string has %d characters.",len);
}
length(p)
char *p;
{
int n;
n=0;
while(*p!='\0')
{
　n++;
　p++;
}
return n;
}
