
/* Function Pointer */


#include<stdio.h>


int Add(int x,int y)
{
int ans=0;
ans=x+y;
return ans;
}

int Sub(int x,int y)
{
int ans=0;
ans=x-y;
return ans;
}




int main()
{
int a,b ,c=0;

printf("\n Enter the Two Number:-");
scanf("%d%d",&a,&b);

int (*fp) (int ,int );       // FP is a pointer Which 1st store address of ADD And then Sub //

fp=Add;//*******FOr Add*********//
c=Add(a,b);
printf("\n Addition using Function pointer :-%d ",c);


fp=Sub;//*******For Sub*********//
c=Sub(a,b);
printf("\n Substraction using Function pointer :- %d ",c);


return 0;
}
