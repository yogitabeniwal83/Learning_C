#include<stdio.h>
#include<conio.h>
void x(int a);
void y(int a,int b);
void main()
{
x(10);
y(30,40);
}
void x(int a)
{
    printf("%d",a);
    y(10,20);
}
void y(int a,int b)
{
    int c=a+b;
    printf("%d",c);
}