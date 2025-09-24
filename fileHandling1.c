// read file

#include<stdio.h>
#include<conio.h>
int main() {
    FILE*ptr = fopen("yogita.txt","r");
    char str[100];
    while(fgets(str,100,ptr) != NULL)
    printf("%s",str);

    return 0;
}
