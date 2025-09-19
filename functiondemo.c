#include<stdio.h>
#include<conio.h>
void add(); void sub(); void mul(); void div();
void main()
{
    printf("press 1 for + \n");
    printf("press 2 for - \n");
    printf("press 3 for * \n");
    printf("press 4 for / \n");
     int n;
     scanf("%d",&n);
     if(n==1)
     add();
     else if(n==2)
     sub();
     else if(n==3)
     mul();
     else if(n==4)
     div();
     else
     printf("invalid input");
     getch();
}
void add()
{
    int a=90,b=900,c;
    c=a+b;
    printf("addition=%d \n",c);
}
void sub()
{
    int a=90,b=900,c;
    c=a-b;
    printf("subtract=%d \n",c);
}
void mul()
{
    int a=90,b=900,c;
    c=a*b;
    printf("multi=%d \n",c);
}
void div()
{
    int a=90,b=900,c;
    c=a/b;
    printf("divide=%d \n",c);
}