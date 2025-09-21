#include<stdio.h>
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    switch(n)
    {
        case1:
        printf("A");
        case2:
        printf("B");
        break;
        case3:
        printf("C");
        case4:
        printf("D");
        break;
        case5:
        printf("E");
        default:
        printf("F");
    }
    return 0;
}