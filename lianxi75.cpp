main()
{
long sum=4,s=4;
int j;
for(j=2;j<=8;j++)/*j is place of number*/
{ printf("\n%ld",sum);
if(j<=2)
s*=7;
else
s*=8;
sum+=s;}
printf("\nsum=%ld",sum);
}
