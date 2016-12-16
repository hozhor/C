#define n 5
struct student
{ char num[6];
　char name[8];
　int score[4];
} stu[n];
input(stu)
struct student stu[];
{ int i,j;
　for(i=0;i　{ printf("\n please input %d of %d\n",i+1,n);
　　printf("num: ");
　　scanf("%s",stu[i].num);
　　printf("name: ");
　　scanf("%s",stu[i].name);
　　　for(j=0;j<3;j++)
　　　{ printf("score %d.",j+1);
　　　　scanf("%d",&stu[i].score[j]);
　　　}
　　printf("\n");
　}
}
print(stu)
struct student stu[];
{ int i,j;
printf("\nno. name sco1 sco2 sco3\n");
for(i=0;i{ printf("%-6s%-10s",stu[i].num,stu[i].name);
　for(j=0;j<3;j++)
　　printf("%-8d",stu[i].score[j]);
　printf("\n");
}
}
main()
{
　input();
　print();
}
