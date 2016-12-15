main()
{
int number[10];
input(number);
max_min(number);
output(number);
}
input(number)
int number[10];
{int i;
for(i=0;i<9;i++)
　scanf("%d,",&number[i]);
　scanf("%d",&number[9]);
}
max_min(array)
int array[10];
{int *max,*min,k,l;
int *p,*arr_end;
arr_end=array+10;
max=min=array;
for(p=array+1;p　if(*p>*max) max=p;
　else if(*p<*min) min=p;
　k=*max;
　l=*min;
　*p=array[0];array[0]=l;l=*p;
　*p=array[9];array[9]=k;k=*p;
　return;
}
output(array)
int array[10];
{ int *p;
for(p=array;p　printf("%d,",*p);
printf("%d\n",array[9]);
}
