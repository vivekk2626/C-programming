
#include<stdio.h>
int main()
{
# pragma pack (1)


struct hello          
{
int i;
float f;
char ch;
struct world                 /*structure inside structure*/
{
int i;
float f;
char ch;
}wobj,iobj;
double d;
};

struct hello hobj;


#pragma pack(1)
union vivek              
{
int i;
float f;
char ch;
double d;
union salunke               /**********union inside union**************/
{
int i;
float f;
char ch;
double d;
}sobj;
};

union vivek vobj;



# pragma pack(1)
struct st1
{
int i;
float f;
char ch;
double d;                /*************** Structure inside union*************/
union 
{
char ch ;
double d;
}uobj;
};

struct st1 s1obj;



union un1
{
int i;
char ch;
                         /**************** union inside structure************/
struct st2
{
char ch;
int i;
}st2o;
};

union un1 un1obj;

un1obj.i=2;
un1obj.ch='k';

                       /**************** member initialization union inside structure****************/
un1obj.st2o.ch='t';
un1obj.st2o.i=64;



hobj.wobj.i=20;
hobj.wobj.f=6.22;      
hobj.wobj.ch='P';

hobj.i=10;                 /*****member initilization of structure inside structure*****/
hobj.f=26.22;
hobj.ch='V';
hobj.d=33;




vobj.i=30;
vobj.f=61.22;
vobj.ch='S';
vobj.d=356;
                         /*******member initilization of Union inside union ******/          
vobj.sobj.i=65;
vobj.sobj.f=66;
vobj.sobj.ch='H';
vobj.sobj.d=67;



s1obj.i=10;
s1obj.f=3.14;
s1obj.ch='A';
s1obj.d=6.64;
                       /********* member initialization of structure inside union **********/  

s1obj.uobj.ch='b';
s1obj.uobj.d=7.86;


printf("\n ***************************************************************");
printf("\n ****** Structure inside Structure*****");

printf("\n\nSize of Hello 1st Structure is ::%d  ",sizeof(hobj));
printf("\n\nValue of I is ::  %d  ",(hobj.i));
printf("\nValue of F is ::    %f  ",(hobj.f));
printf("\nValue of CH is ::   %c  ",(hobj.ch));
printf("\nValue of D is ::   %lf  ",(hobj.d));

printf("\n\nSize of World 2nd Structure is ::%d  ",sizeof(hobj.wobj));
printf("\n\nValue of I is ::  %d  ",(hobj.wobj.i));
printf("\nValue of F is ::    %f  ",(hobj.wobj.f));
printf("\nValue of CH is ::   %c  ",(hobj.wobj.ch));
printf("\n ***************************************************************");
printf("\n\n ****** Union inside Union *****");
printf("\n\nSize of 1st union  is ::%d  ",sizeof(vobj));
printf("\n\nValue of I is ::  %d  ",(vobj.i));
printf("\nValue of F is ::    %f  ",(vobj.f));
printf("\nValue of CH is ::   %c  ",(vobj.ch));
printf("\nValue of Double is :: %lf  ",(vobj.d));

printf("\n\nSize of 2nd union  is ::%d  ",sizeof(vobj.sobj));
printf("\n\nValue of I is ::  %d  ",(vobj.sobj.i));
printf("\nValue of F is ::    %f  ",(vobj.sobj.f));
printf("\nValue of CH is ::   %c  ",(vobj.sobj.ch));
printf("\nValue of Double  is :: %lf  ",(vobj.sobj.d));

printf("\n ***************************************************************");
printf("\n\n ****** STRUCTURE inside Union *****");
printf("\n\nSize of Structure inside union  is ::%d  ",sizeof(s1obj));
printf("\n\nValue of I is ::  %d  ",(s1obj.i));
printf("\nValue of F is ::    %f  ",(s1obj.f));
printf("\nValue of CH is ::   %c  ",(s1obj.ch));
printf("\nValue of Double  is :: %lf  ",(s1obj.d));
printf("\n\nSize of inside union  is ::%d  ",sizeof(s1obj.uobj));
printf("\nValue of CH is ::   %c  ",(s1obj.uobj.ch));
printf("\nValue of Double  is :: %lf  ",(s1obj.uobj.d));
printf("\n ***************************************************************");

printf("\n\n ****** union  inside structure *****");
printf("\n\nSize of Structure inside union  is ::%d  ",sizeof(un1obj));
printf("\n\nValue of I is ::  %d  ",(un1obj.i));
printf("\nValue of ch is ::    %c  ",(un1obj.ch));

printf("\n\nSize of inside Structure  is ::%d  ",sizeof(un1obj.st2o));
printf("\n\nValue of I is ::  %d  ",(un1obj.st2o.i));
printf("\nValue of ch is ::    %c  ",(un1obj.st2o.ch));

printf("\n ***************************************************************");


return 0;
}



