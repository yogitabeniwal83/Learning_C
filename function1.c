# include<stdio.h>
#include<conio.h>
void x(int a);
void main()
{
    printf("enter value");
    int n;
    scanf("%d",&n);
    x(n);
    x(10);
}
void x(int p)
{
    printf("%d",p);
}