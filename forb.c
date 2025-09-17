#include<stdio.h>
int main()
{
    int a;
    printf("enter number");
    scanf("%d",&a);
    for(a=1; a<=120; a+=30)
    {
        a++;
        if(a<=30)
        {
            printf("%d",a);
            a=a+20;
        }
        else{
            a=a+30;
            printf("%d",a);
        }
    }
    return 0;
}