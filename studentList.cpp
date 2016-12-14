  #include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student{//声明结构体
	long id;
	char name[20];
	int age;
	student * next;
} student;
void sort(student *head);
student * creat(void);//创建链表
void print(student *head);//定义print函数

int main()//主函数
{
	student * top=creat();
	sort(top);
	print(top);
	return 0;
}

void sort(student *head)
{
	student *p;
	bool flag=true;
	long tid;
	char tname[20];
	int tage;
	while(flag)
	{
		flag=false;
		p=head;
		do{
				if((p->next!=NULL)&&(p->id>(p->next)->id))
				{
					flag=true;
					tid=p->id;//赋值
					strcpy(tname,p->name);
					tage=p->age;
					p->id=(p->next)->id;
					strcpy(p->name,(p->next)->name);
					p->age=(p->next)->age;
					(p->next)->id=tid;
					strcpy((p->next)->name,tname);
					(p->next)->age=tage;
				}//if
				p=p->next;
		}while(p!=NULL);//do
	}
}



student * creat(void)//创建链表
{
	student * head;
	student * p1,* p2;
	int n=0;
	p1=p2=(student *)malloc(sizeof(student));//申请一个空间，首节点
	printf("请按格式输入信息(输入0结束程序)\n学号　姓名　年龄:\n");
	scanf("%ld %s %d",&p1->id,&p1->name,&p1->age);//输入学号 姓名 年龄
	head=NULL;
	while(p1->id!=0)//循环直到为零
	{
		n=n+1;
		if(n==1)head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(student *)malloc(sizeof(student));//创建非首节点空间
	
	scanf("%ld %s %d",&p1->id,&p1->name,&p1->age);//输入学号 姓名 年龄
	}
	p2->next=NULL;
	return head;
}


void print(student *head)//定义print函数
{
	student *p;
	printf("输出名单:\n ------------------------------\n");
	printf("｜　学号　｜　姓名　｜　年龄　｜\n");
	p=head;//p指向首节点
	if(head!=NULL)//不是空表
	do{	printf(" ------------------------------\n");
		printf("｜ 　%ld　 ｜　%s　 ｜　 %d　 ｜\n",p->id,p->name,p->age);
		p=p->next;//p指向下一个节点
	}while(p!=NULL);//当p不是空地址4
	printf(" ------------------------------\n");
}






