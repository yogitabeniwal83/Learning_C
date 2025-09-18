#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a,f=1;
    printf("enter a number:\n");
    scanf("%d",&a);
    for(i=1; i<=a; i++)
    f=f*i;
    printf("fractional of %d is %d\n",a,f);
    getch();
}
     