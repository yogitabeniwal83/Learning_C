#include<stdio.h>
int main()
{
    int k;
    printf("enter number");
    scanf("%d",&k);
    for(k=100; k>=5; k-=10)
    {
        printf("%d",k);
        if(k>=50)
        {
            printf("%d",k);
            k=k-30;
        }
        else{
            k=k-20;
            printf("%d",k);
        }
    }
    return 0;
}