#include<stdio.h>
int main()
{
    int a,i,sum=0;
    scanf("%d",&a);
    while(a!=0)
{
    a/=10;
    sum++;
}
printf("%d",sum);
    return 0;
}
