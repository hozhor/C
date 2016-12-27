#include <stdio.h>
float average(float array[10]);
int main(){

float score[10],aver;
int i;
printf("请输入10学生成绩:\n");
for (i=0;i<10;i++){
scanf("%f",&score[i]);
}
printf("\n");
aver=average(score);
printf("平均值为:%5.2f\n",aver);




return 0;

}

float average(float array[10]){
int i;
float aver,sum=array[0];
for(i=0;i<10;i++)
sum=sum+array[i];
aver=sum/10;

return(aver);

}
