#include<stdio.h>
#include<conio.h>
void main()
{
int p1[2],p2[2],p3[2],p4[2];
int i,flag1=0,flag2=0;
printf(enter the points one by one");
for(i=0;i<2;i++)
{
scanf("%d",&p1[i]);
}
for(i=0;i<2;i++)
{
scanf("%d",&p2[i]);
}
for(i=0;i<2;i++)
{
scanf("%d",&p3[i]);
}
for(i=0;i<2;i++)
{
scanf("%d",&p4[i]);
}
flag1=p1[0]+p2[0]+p3[0]+p4[0];
flag2=p1[1]+p2[1]+p3[1]+p4[1];
if(flag1==flag2)
{
printf("square");
}
else 
{
printf("not square");
}
getch();
}
