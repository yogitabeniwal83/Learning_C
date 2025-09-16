#include<stdio.h>
int main()
{
    int i;
    printf("enter number");
    scanf("%d",&i);
    for(int i=1; i<=10; i=i+3)
    {
        i++;
        printf("%d",i);
        i=i+1;
    }
return 0;
}