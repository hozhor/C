#include "stdio.h"
main()
{ file *fp;
int i,j,n,ni;
char c[160],t,ch;
if((fp=fopen("a","r"))==null)
{printf("file a cannot be opened\n");
exit(0);}
printf("\n a contents are :\n");
for(i=0;(ch=fgetc(fp))!=eof;i++)
{c[i]=ch;
putchar(c[i]);
}
fclose(fp);
ni=i;
if((fp=fopen("b","r"))==null)
{printf("file b cannot be opened\n");
exit(0);}
printf("\n b contents are :\n");
for(i=0;(ch=fgetc(fp))!=eof;i++)
{c[i]=ch;
putchar(c[i]);
}
fclose(fp);
n=i;
for(i=0;ifor(j=i+1;jif(c[i]>c[j])
{t=c[i];c[i]=c[j];c[j]=t;}
printf("\n c file is:\n");
fp=fopen("c","w");
for(i=0;i{ putc(c[i],fp);
putchar(c[i]);
}
fclose(fp);
}
