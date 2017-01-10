#include<stdio.h>
/*
定义一个结构体变量,呢个里面用另一个结构体变量,最后遍历出

*/
int main(){
struct score{
int English;
int math;
};

struct student{
int id;
char name[20];
char sex;
struct score src;
}stu[3]={{001,"ali",'m',50,64},{002,"gli",'w',89,74},{003,"kul",'m',55,69}};
for (int i=0;i<3;i++)
printf("%5.3d %5s %5c %5.3d %5.3d\n",stu[i].id,stu[i].name,stu[i].sex,stu[i].src.English,stu[i].src.math);
return 0;
}
