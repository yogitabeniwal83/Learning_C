#include<stdio.h>
int main()
{
    int i;
    printf("enter number");
    scanf("%d",i);
    for(int i=50; i>=1;)
    {
        printf("%d",i);
        i=i-30;
    }
    return 0;
}