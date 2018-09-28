#include <stdio.h>

int main()
{
int sum=0,n,i,m;
printf("enter the numbers");
scanf("%d",&n);
printf("the numbers are");
for(i=0;i<=n;i++)
{
    scanf("%d",&m);
    sum=sum+m;
}
printf("thesum of n numbers are%d",sum);
}
