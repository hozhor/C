#include<stdio.h>
#include<string.h>
int login();
int menu();
int student();
struct admin {
int id;
char password[20];
}ADMIN[2]={{001,"abc"},{002,"def"}};
int menu(){
int NUM;
printf("________________学生管理里系统________________\n ");
printf("__________________1:登陆_____________________ \n");
printf("___________________2:注册_____________________ \n");
printf("___________________0:退出_____________________ \n");
printf("请输入操作序号: \n");
scanf("%d",&NUM);
switch(NUM){
case 1:
	login();
	break;
case 2:
	break;
case 0:
	printf("谢谢使用\n");
	break;
default :
	printf("输入无效,从新输入操作号:\n");
	menu();
}

return 0;
}

int login(){//管理员登陆
int ID;
char PWORD[20];
printf("帐号:");
scanf("%d",&ID);
printf("\n密码:");
scanf("%s",&PWORD);
for(int i=0;i<2;i++){
if(ID==ADMIN[i].id && strcmp(PWORD,ADMIN[i].password)==0){
printf("登陆成功!\n");
student();
}
else{
printf("密码有误,登陆失败!\n"); 
login();
}
}
return 0;
}
int student(){


return 0;
}

int main(){
menu();
return 0;
}
