#include <stdio.h>
int main()
{
int i,n;
printf("enter a number:");
scanf("%d",&n);
for(i=1;i<=5;i++)
{
printf("%dx%d=%d\n",i,n,n*i);
}
return 0;
}
