#include<stdio.h>
#include<conio.h>
void x(int,int);
void y(int,char);
void main()
{
    y(10,'A');
    x(10,20);
}
void x(int a,int b)
{
    int c=a*b;
    printf("%d",c);
}
void y(int a,char b)
{
    printf("%d%c",a,b);
}