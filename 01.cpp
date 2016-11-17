#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Student{
	int id;
	char name[20];
	int  sshuxue;
	int  sc;
	int  syingyu;
        }st[10];
 
	void menu();/*调用菜单函数*/
	int a();	//从文件中读入数据
	void a1();    //增量式录入学生信息
	void b();	//计算每门课的总成绩和平均分
	void c();	//计算每个学生的总成绩和平均分
	void zfgd();	//按总分由高到低排
	void zfdg();	//按总分由低到高排
	void e();	//按学号由小到大排
	void f();    //按学号来查询
    void o();    //输出成绩	
    void tongji(); //按平均分统计人数操作
 
/*主函数************************************************************************************/

void main()
{
    int choice;/*用户选择变量*/
    printf("*******************************************************************************\n");
    printf("*                                                                             *\n");
    printf("*                            学生成绩文件管理                                 *\n"); 
    printf("*                                                                             *\n");
    printf("*******************************************************************************\n\n\n");
    printf("******************************●●欢迎使用●●*********************************");

	

    while (1)

    {FILE* file;
	if((file=fopen("f1.txt","r"))==NULL)
	printf("file open error\n");
	int i=0;
	while(!feof(file)){
		fscanf(file,"%d",&st[i].id);
			fscanf(file,"   ");
		fscanf(file,"%s",st[i].name);
	       	fscanf(file,"   ");
		fscanf(file,"%d",&st[i].sshuxue);
      		fscanf(file,"   ");
		fscanf(file,"%d",&st[i].sc);
      		fscanf(file,"   ");
		fscanf(file,"%d",&st[i].syingyu);
		fscanf(file,"\n");
		i++;}
	fclose(file);


         menu();/*调用菜单函数形成操作界面*/
         printf("请选择:");
 scanf("%d", &choice); 
 printf("*****************************************************************************\n");
         
         if ( choice==0 )
         {
              printf("\t\t\t\t谢谢使用!!!");
              break;
          }
       switch(choice) /*多重选择实现功能不同的功能*/

       {  
	       case 1:
		    		a();    
                break;
            case 2:
               a1();
                break;
           case 3:
				    b(); 
				 break;
           case 4:
					c();     
              break;
           case 5:
					zfgd();
              break;
           case 6:            
				   zfdg();
              break;
		   case 7:  
			        e(); 
			      break;
           case 8:   
			       xmpx();
			   
			      break;
		  case 9:			   
			         f();                        
			      break;
           case 10:
			   			                          
			      break;
           case 11:
			         tongji();                   
			      break;
            case 12:
			          o();             
			      break;
           case 13:
			 
			   
                         
			      break;
		   case 0:

              printf("\n谢谢使用!再见!\n");

           default:

              printf("\n按键错误!请重新选择!\n");

       }/*结束switch*/

    }/*结束while*/

}












/*菜单函数*************************************************************************************/

void menu()

{

    printf("********************************请输入所需操作******************************\n");/*选择功能菜单*/
     printf("****************************************************************************\n");
     printf("  1.  Read from a fil\n  2.  Append record manually\n  3.  Calculate total and average score of every course\n  4.  Calculate total and average score of every student\n  5.  Sort in descending order by total score of every student\n  6.  Sort in ascending order by total score of every stuednet\n  7.  Sort in ascending order by number\n  8.  Sort in dictionary order by name\n  9.  Search by number\n  10. Search by name\n  11. Statistic analysis for every course\n  12. List record\n  13. Write to a file\n  0.  Exit\n");
	printf("*****************************************************************************\n");
	}

 


//从文件中读入数据
        
int a()
{

   FILE *fp;
   char ch,filename[10];
printf("please input file name->--------->>-");
scanf("%s",filename);
 printf("--->>>>>>>>>>>>>>>>>*<<<<<<<<<<<<<<<---\n");
   fp=fopen(filename,"r+");    /*这个文本文件应该和你生成的应用程序在相同文件夹下*/
   if(fp==NULL)    /*文件只能打开一次*/
   {
       printf("this file is not exist!");
       exit(0);
   }
  printf("  学号   姓名  数学  C语言  英语  \n");
   ch=fgetc(fp);
   int counter=1;
   while(ch!=EOF)//从指定的文件中读入一个字符，eof是结束标志
   {
       putchar(ch);
       ch=fgetc(fp);
	   if (ch=='\n')
		   ++counter;
   }
   
   printf("\n");
   
   printf("--->>>>>>>>>>>>>>>>>*<<<<<<<<<<<<<<<---\n");
   //fclose(fp);//关闭文件
   printf("total num:%d\n",counter);
   return(0);
}
//求每门课程的平均分和总成绩
void b(){
	int aier();
        printf("\n\n");
		int i;
		int n;
	n=aier();
	float sum_sshuxue=0.00,sum_sc=0.00,sum_syingyu=0.00;
	 float aver_sshuxue=0.00,aver_sc=0.00,aver_syingyu=0.00;
	 for(i=0;i<n;i++){
	 sum_sshuxue=sum_sshuxue+st[i].sshuxue;
   	 sum_sc=sum_sc+st[i].sc;
	 sum_syingyu=sum_syingyu+st[i].syingyu;}
aver_sshuxue=sum_sshuxue/n;
aver_sc=sum_sc/n;
aver_syingyu=sum_syingyu/n;
printf("      总分     平均值\n");
printf("\n数学   %.2f   %.2f\n",sum_sshuxue,aver_sshuxue);
printf("\nC语言  %.2f   %.2f\n",sum_sc,aver_sc);
printf("\n英语   %.2f   %.2f",sum_syingyu,aver_syingyu);
	    printf("\n\n");

	}


//计算每个学生的总成绩和平均分
void c(){
        printf("\n\n");
		 int aier();
		 int i;
		 int n;
        n=aier();
		float sum[10];
    	float pingjun[10];
         for(i=0;i<n;i++){
			sum[i]=st[i].sshuxue+st[i].sc+st[i].syingyu;		
	         pingjun[i]=sum[i]/3;}
    printf("   学号     姓名     总分     平均分  \n");  
		 for(i=0;i<n;i++)
printf("  %d    %s    %.2f   %.2f  \n",st[i].id,st[i].name,sum[i],pingjun[i]);
	
}

//按总分由高到低排

void zfgd(){
        printf("\n\n");
		int i,j,n,aier();
       n=aier();
        float sum[10],change[10],temp;
			for(i=0;i<n;i++)
		sum[i]=st[i].sshuxue+st[i].sc+st[i].syingyu;
			for(j=0;j<n;j++)
			for(i=0;i<n-j;i++)
			if(sum[i]<sum[i+1]){
						temp=sum[i];
						sum[i]=sum[i+1];
						sum[i+1]=temp;}
			for(i=0;i<n;i++)
		change[i]=st[i].sshuxue+st[i].sc+st[i].syingyu;
			printf("   学号      姓名     总分    排名  \n");
			for(i=0;i<n;i++)
			for(j=0;j<n;j++)
			if(sum[i]==change[j])
				
				printf(" %d      %s    %.2f    %d\n",st[j].id,st[j].name,sum[i],i+1);
			printf("\n");				

	}
//按总分由低到高排

void zfdg(){
        printf("\n\n");
		int i,j,n,aier();
       n=aier();
        float sum[10],change[10],temp;
			for(i=0;i<n;i++)
		sum[i]=st[i].sshuxue+st[i].sc+st[i].syingyu;
			for(j=n-1;j>0;j--){
				for(i=0;i<n-j;i++){
			if(sum[i]>sum[i+1]){
						temp=sum[i];
						sum[i]=sum[i+1];
						sum[i+1]=temp;}
			}}
			for(i=0;i<n;i++)
		change[i]=st[i].sshuxue+st[i].sc+st[i].syingyu;
			printf("   学号      姓名     总分    排名  \n");
			for(i=0;i<n;i++)
			for(j=0;j<n;j++)
			if(sum[i]==change[j])
				
				printf(" %d      %s    %.2f    %d\n",st[j].id,st[j].name,sum[i],i+1);
			printf("\n");				

	}
	//按学号由小到大排
void e(){
      int i,j,n,aier();
       n=aier();
	  int id[10],change[10],temp;
	  for (i=0;i<n;i++)
	id[i]=st[i].id;
	    for(j=0;j<n;j++)
			for(i=0;i<n-i;i++)	
		  if(id[i]>id[i+1]){
		  temp=id[i];
		  id[i]=id[i+1];
		  id[i+1]=temp;
		  }
	printf("   学号        姓名    数学  C语言 英语  \n");	
  
	for(i=0;i<n;i++)
	printf("  %d     %s     %d    %d   %d\n",st[i].id,st[i].name,st[i].sshuxue,st[i].sc,st[i].syingyu);	

	}



int aier()
{

   FILE *fp;
   char ch;

   fp=fopen("f1.txt","r+");    /*这个文本文件应该和你生成的应用程序在相同文件夹下*/
   if(fp==NULL)    /*文件只能打开一次*/
   {
       printf("this file is not exist!");
       exit(0);
   }
  
   ch=fgetc(fp);
   int counter=1;
   while(ch!=EOF)//从指定的文件中读入一个字符，eof是结束标志
   {
       ch=fgetc(fp);
	   if (ch=='\n')
		   ++counter;
   }
   

   return counter;
}



//增量式录入成绩
void a1(){
	int i=0,j;
	char c='y';

	while(c=='y'){
		printf("学号");
	scanf("%d",&st[i].id);
	for(i=0;i<10;i++){
	if(st[i].id==st[i+1].id){
	printf("你输入的学号已存在，请重新输入\n");
	printf("学号");
	scanf("%d",&st[i].id);
	}}
printf("姓名");	
	scanf("%s",st[i].name);
printf("数学");
		scanf("%d",&st[i].sshuxue);
printf("C语言");
		scanf("%d",&st[i].sc);
printf("英语");
	scanf("%d",&st[i].syingyu);
		i++;
for(i=0;i<10;i++){
	for(j=10;j<=i;j--){
	if(st[i].id==st[j].id){
	printf("你输入的学号已存在，请重新输入\n");
	printf("学号");
	scanf("%d",&st[i].id);
}}}
  getchar();
       printf("继续输入学生信息吗?");

        printf("\n继续请按y；不进行请按n\n");

       c=getchar();

     getchar();
}

}
/*按学号查询学生信息*******************************************************************************/

void f()

{

    int n,i,j,k,x,aier();
n=aier();
    char c='y';

    while(c=='y')

    {

       k=-1;

       printf("\n请输入学生学号:");

scanf("%d",&x);

for(i=0;i<n;i++)

if(st[i].id==x){
	
               k=i;/*找到要查询的同学学号,并用k记下其下标*/

               printf("该学生的信息\n");
	printf("   学号        姓名    数学  C语言 英语  \n");	
              printf("  %d     %s     %d    %d   %d\n",st[i].id,st[i].name,st[i].sshuxue,st[i].sc,st[i].syingyu);
}


		   getchar();
       printf("继续查询其他学生信息吗?");

        printf("\n继续请按y；不进行请按n\n");

       c=getchar();

     getchar();

    }/*结束while*/

  getchar();

}





//输出学生成绩
void o(){
printf("\n\n");
		 int aier();
		 int i;
		 int n;
        n=aier();
		float sum[10];
    	float pingjun[10];
         for(i=0;i<n;i++){
			 sum[i]=st[i].sshuxue+st[i].sc+st[i].syingyu;		
	         pingjun[i]=sum[i]/3;}
             printf("   学号     姓名      数学	C语言	英语	总分	平均分 \n");  
		 for(i=0;i<n;i++)
			 printf("  %d  %s      %.2d	%.2d	%.2d	%.2f	%.2f\n",st[i].id,st[i].name,st[i].sshuxue,st[i].sc,st[i].syingyu,sum[i],pingjun[i]);
}








/*按平均分统计人数操作*****************************************************************************/

void tongji()

{
int aier();
		int i=0,m,k;
		 int n;
        n=aier();
		float z;

//**********************************************************************************************************************************		
        printf("\n\n  -----------------------------------------------------------\n");
		printf("  不及格的:\t");
		 k=0;
	for(i=0;i<n;i++)/*统计数学不及格人数*/
    {
      
        if(st[i].sshuxue<60)
       {  
           m=i;/*找到，并用m记下其下标*/      
       k++;/*k为数学不及格人数*/
		}
		
       }	
        printf("  共%d人\t",k);
z=(float)k/(float)n*100;
		printf("  所占的比 %.2f%% \n",z);
        printf("  -----------------------------------------------------------\n");
    

   
	
	//****************************************************************************************************************************
	
	    printf("  60~69分之间:\t");
		 k=0;
	for(i=0;i<n;i++)/*统计数学60~69分人数*/
    {
      
        if(st[i].sshuxue>59&&st[i].sshuxue<70)
       {     
           m=i;/*找到数学69~69学生，并用m记下其下标*/  
       k++;/*k为数学60~69分人数*/
		} 
		
      } 
        printf("  共%d人\t",k);
		z=(float)k/(float)n*100;
		printf("  所占的比 %.2f%% \n",z);
         printf("  ----------------------------------------------------数-----\n");
   
  
   
	//******************************************************************************************************************************
  printf("  70~79分之间:\t");
  k=0;
  for(i=0;i<n;i++)/*统计数学70~79分人数*/
    {
     
        if(st[i].sshuxue>69&&st[i].sshuxue<80)
       {     
           m=i;/*找到数学70~79学生，并用m记下其下标*/              
       	k++;/*k为数学70~79分人数*/
		}
	
       } 

        printf("  共%d人\t",k);
z=(float)k/(float)n*100;
		printf("  所占的比 %.2f%% \n",z);
        printf("  ----------------------------------------------------学-----\n");

    


	//*********************************************************************************************************************************
    printf("  80~89分之间:\t");
       k=0;
    for(i=0;i<n;i++)/*统计数学80~89分人数*/
    {
        if(st[i].sshuxue>79&&st[i].sshuxue<90)
       {     
           m=i;/*找到数学80~89学生，并用m记下其下标*/    
       k++;/*k为数学80~89分人数*/
		}
		
     }  
        printf("  共%d人\t",k);
		z=(float)k/(float)n*100;
		printf("  所占的比 %.2f%% \n",z);
        printf("  -----------------------------------------------------------\n");
    


//***************************************************************************************************************************************
    printf("  90~100分之间:\t");
	k=0;
    for(i=0;i<n;i++)/*统计数学90~100分人数*/
    {
       
        if(st[i].sshuxue>89&&st[i].sshuxue<=100)
       {     
           m=i;/*找到数学90~100学生，并用m记下其下标*/              
       k++;/*k为数学90~100分人数*/
		}
		
      } 
        printf("  共%d人\t",k);
		z=(float)k/(float)n*100;
		printf("  所占的比 %.2f%% \n",z);
        
      printf("  -----------------------------------------------------------\n\n");
//****************************************************************************************************************************************


//**********************************************************************************************************************************		
     printf("          -----------------------------------------------------------\n");
		printf("          不及格的:\t");
		 k=0;
	for(i=0;i<n;i++)/*统计数学不及格人数*/
    {
      
        if(st[i].sc<60)
       {  
           m=i;/*找到，并用m记下其下标*/      
       k++;/*k为数学不及格人数*/
		}
		
       }	
        printf("  共%d人\t",k);
z=(float)k/(float)n*100;
		printf("   所占的比 %.2f%% \n",z);
        printf("          -----------------------------------------------------------\n");
    

   
	
	//****************************************************************************************************************************
	
	    printf("          60~69分之间:\t");
		 k=0;
	for(i=0;i<n;i++)/*统计数学60~69分人数*/
    {
      
        if(st[i].sc>59&&st[i].sc<70)
       {     
           m=i;/*找到数学69~69学生，并用m记下其下标*/  
       k++;/*k为数学60~69分人数*/
		} 
		
      } 
        printf("  共%d人\t",k);
		z=(float)k/(float)n*100;
		printf("  所占的比 %.2f%% \n",z);
        printf("          -----------------------------------------------------C-----\n");
   
  
   
	//******************************************************************************************************************************
  printf("          70~79分之间:\t");
  k=0;
  for(i=0;i<n;i++)/*统计数学70~79分人数*/
    {
     
        if(st[i].sc>69&&st[i].sc<80)
       {     
           m=i;/*找到数学70~79学生，并用m记下其下标*/              
       	k++;/*k为数学70~79分人数*/
		}
	
       } 

        printf("  共%d人\t",k);
z=(float)k/(float)n*100;
		printf("  所占的比 %.2f%% \n",z);
        printf("          ----------------------------------------------------言-----\n");

    


	//*********************************************************************************************************************************
    printf("          80~89分之间:\t");
       k=0;
    for(i=0;i<n;i++)/*统计数学80~89分人数*/
    {
        if(st[i].sc>79&&st[i].sc<90)
       {     
           m=i;/*找到数学80~89学生，并用m记下其下标*/    
       k++;/*k为数学80~89分人数*/
		}
		
     }  
        printf("  共%d人\t",k);
		z=(float)k/(float)n*100;
		printf("  所占的比 %.2f%% \n",z);
        printf("          -----------------------------------------------------------\n");
    


//***************************************************************************************************************************************
    printf("          90~100分之间:\t");
	k=0;
    for(i=0;i<n;i++)/*统计数学90~100分人数*/
    {
       
        if(st[i].sc>89&&st[i].sc<=100)
       {     
           m=i;/*找到数学90~100学生，并用m记下其下标*/              
       k++;/*k为数学90~100分人数*/
		}
		
      } 
        printf("  共%d人\t",k);
		z=(float)k/(float)n*100;
		printf("  所占的比 %.2f%% \n",z);
        
      printf("          -----------------------------------------------------------\n\n");
//****************************************************************************************************************************************
//**********************************************************************************************************************************		
     printf("  -----------------------------------------------------------\n");
		printf("  不及格的:\t");
		 k=0;
	for(i=0;i<n;i++)/*统计数学不及格人数*/
    {
      
        if(st[i].syingyu<60)
       {  
           m=i;/*找到，并用m记下其下标*/      
       k++;/*k为数学不及格人数*/
		}
		
       }	
        printf("  共%d人\t",k);
z=(float)k/(float)n*100;
		printf("  所占的比 %.2f%% \n",z);
        printf("  -----------------------------------------------------------\n");
    

   
	
	//****************************************************************************************************************************
	
	    printf("  60~69分之间:\t");
		 k=0;
	for(i=0;i<n;i++)/*统计数学60~69分人数*/
    {
      
        if(st[i].syingyu>59&&st[i].syingyu<70)
       {     
           m=i;/*找到数学69~69学生，并用m记下其下标*/  
       k++;/*k为数学60~69分人数*/
		} 
		
      } 
        printf("  共%d人\t",k);
		z=(float)k/(float)n*100;
		printf("  所占的比 %.2f%% \n",z);
        printf("  ----------------------------------------------------英-----\n");
   
  
   
	//******************************************************************************************************************************
  printf("  70~79分之间:\t");
  k=0;
  for(i=0;i<n;i++)/*统计数学70~79分人数*/
    {
     
        if(st[i].syingyu>69&&st[i].syingyu<80)
       {     
           m=i;/*找到数学70~79学生，并用m记下其下标*/              
       	k++;/*k为数学70~79分人数*/
		}
	
       } 

        printf("  共%d人\t",k);
z=(float)k/(float)n*100;
		printf("  所占的比 %.2f%% \n",z);
        printf("  ----------------------------------------------------语-----\n");

    


	//*********************************************************************************************************************************
    printf("  80~89分之间:\t");
       k=0;
    for(i=0;i<n;i++)/*统计数学80~89分人数*/
    {
        if(st[i].syingyu>79&&st[i].syingyu<90)
       {     
           m=i;/*找到数学80~89学生，并用m记下其下标*/    
       k++;/*k为数学80~89分人数*/
		}
		
     }  
        printf("  共%d人\t",k);
		z=(float)k/(float)n*100;
		printf("  所占的比 %.2f%% \n",z);
        printf("  -----------------------------------------------------------\n");
    


//***************************************************************************************************************************************
    printf("  90~100分之间:\t");
	k=0;
    for(i=0;i<n;i++)/*统计yingyu90~100分人数*/
    {
       
        if(st[i].syingyu>89&&st[i].syingyu<=100)
       {     
           m=i;/*找到yingyu90~100学生，并用m记下其下标*/              
       k++;/*k为yingyu90~100分人数*/
		}
		
      } 
        printf("  共%d人\t",k);
		z=(float)k/(float)n*100;
		printf("  所占的比 %.2f%% \n",z);
        printf("  -----------------------------------------------------------\n\n");
   
//****************************************************************************************************************************************

}

 //按姓名排序
void xmpx(){
		int aier();
		int i,j;
		int n;
		n=aier();
        char change[10][20],temp[20];

			for(j=0;j<n;j++)
				for(i=0;i<n-j;i++)
					if(strcmp(st[i].name,st[i+1].name)>0){
						strcpy(temp,st[i].name);
						strcpy(st[i].name,st[i+1].name);
						strcpy(st[i+1].name,temp);}
		
			printf("\n由以上表格,可得以下按姓名的字典顺序排出的成绩表\n");
			printf("学号        姓名      数学   C语言    英语\n");
			for(i=0;i<n;i++)
				
			printf("%d  %s  %d  %d  %d\n",st[i].id,st[i].name,st[i].sshuxue,st[i].sc,st[i].syingyu);
							printf("请按任意数字返回目录");
	}