#include<stdio.h>
int main()
{
    int a, n=1;
    printf("enter number");
    scanf("%d",&a);
    start:
    n=n*a;
    a--;
    if(a>0)
    {
        goto start;
    }
    printf("the totalmvalue is %d",n);
    return 0;
}