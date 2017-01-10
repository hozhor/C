#include<stdio.h>
#include<string.h>
/*
对候选班长得票的统计程序

*/
int main(){
struct student{
char name[20];
int count;
}stu[3]={{"ali",0},{"gli",0},{"kul",0}};
char student_name[20];
for(int j=0;j<10;j++)
{
scanf("%s",student_name);
for (int i=0;i<3;i++)
{
if(strcmp(student_name,stu[i].name)==0)
stu[i].count++;

}
}
for(int i=0;i<3;i++)
printf("%-5s :%5.3d\n",stu[i].name,stu[i].count);
return 0;
}
