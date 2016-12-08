main()
{
int day,x1,x2;
day=9;
x2=1;
while(day>0)
　{x1=(x2+1)*2;/*第一天的桃子数是第2天桃子数加1后的2倍*/
　x2=x1;
　day--;
　}
printf("the total is %d\n",x1);
}
