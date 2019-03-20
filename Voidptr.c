
///Void pointer////

#include<stdio.h>

int main()
{
int no=11;
float f=3.14;
double d=6.10;           /*****declearation is  *(datatype*)v  ***********/                    
                           
int *p=&no;
float *q=&f;
double *r=&d;

void *v=NULL;   //******In this pointer is VOID as well as NULL pointer also//
v=&no;
printf("\n Value of INTEGER using void pointer is :- %d",*(int *)v);

v=&f;
printf("\n Value of FLOAT using  void pointer is :-   %f",*(float *)v);

return 0;

}
