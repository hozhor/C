#include<stdio.h>
int printstart();/*对print_message函数进行声明*/
int print_message();/*对print_message函数进行声明*/
/*主函数*/
int main(){
	printstart();/*调用printstart函数*/
	print_message();/*调用print_message函数*/
return 0;
}

int printstart(){
	printf("*******************************************************\n");
return 0;
}

int print_message(){
	printf("hello world\n");
return 0;
}




