main( )
{
long a,b,c,d,e,x;
scanf("%ld",&x);
a=x/10000;/*分解出万位*/
b=x%10000/1000;/*分解出千位*/
c=x%1000/100;/*分解出百位*/
d=x%100/10;/*分解出十位*/
e=x%10;/*分解出个位*/
if (a!=0) printf("there are 5, %ld %ld %ld %ld %ld\n",e,d,c,b,a);
else if (b!=0) printf("there are 4, %ld %ld %ld %ld\n",e,d,c,b);
　　else if (c!=0) printf(" there are 3,%ld %ld %ld\n",e,d,c);
　　　　else if (d!=0) printf("there are 2, %ld %ld\n",e,d);
　　　　　　else if (e!=0) printf(" there are 1,%ld\n",e);
}
