#include<stdio.h>
3include<conio.h>
void main()
{
int n,i;
clrscr();
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
  if(i%2!=0)
  {
    printf("\n %d",i);
  }
}
}

