#include<stdio.h>
int main()
{
# pragma pack(2)      /****pragma Pack value must be power of 2****/ 
struct demo
{
char ch;
int i;
float f;
 struct hello hobj;
};
struct demo obj;
struct hello
{
int i;
char ch;
};


struct demo *ptr=&obj;       

	/*******WE have POINTER thats why we use INDIRECT(->) method for decleration insead of usin DIRECT(.) method******/
ptr->i=10;
ptr->f=3.14;
ptr->ch='v';

printf("\n Size structure    :%d",sizeof(obj));
printf("\n Only value of i   :%d",ptr->i);
printf("\n Only value of f   :%f",ptr->f);
printf("\n Only value of ch  :%c" ,ptr->ch	);



return 0;

}
