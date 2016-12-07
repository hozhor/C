main()
{
　int a,b,num1,num2,temp;
　printf("please input two numbers:\n");
　scanf("%d,%d",&num1,&num2);
　if(num1　{ temp=num1;
　　num1=num2;　
　　num2=temp;
　}
a=num1;b=num2;
while(b!=0)/*利用辗除法，直到b为0为止*/
　{
　　temp=a%b;
　　a=b;
　　b=temp;
　}
printf("gongyueshu:%d\n",a);
printf("gongbeishu:%d\n",num1*num2/a);
}
