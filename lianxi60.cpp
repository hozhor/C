#define nmax 50
main()
{
int i,k,m,n,num[nmax],*p;
printf("please input the total of numbers:");
scanf("%d",&n);
p=num;
for(i=0;i　*(p+i)=i+1;
　i=0;
　k=0;
　m=0;
　while(m　{
　if(*(p+i)!=0) k++;
　if(k==3)
　{ *(p+i)=0;
　k=0;
　m++;
　}
i++;
if(i==n) i=0;
}
while(*p==0) p++;
printf("%d is left\n",*p);
}
