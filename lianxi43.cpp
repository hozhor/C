main()
{
float a[3][3],sum=0;
int i,j;
printf("please input rectangle element:\n");
for(i=0;i<3;i++)
　for(j=0;j<3;j++)
　scanf("%f",&a[i][j]);
for(i=0;i<3;i++)
　sum=sum+a[i][i];
printf("duijiaoxian he is %6.2f",sum);
}
