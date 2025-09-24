
// write file

#include<stdio.h>
#include<conio.h>
int main() {
    FILE*ptr = fopen("beniwal.txt","w");
    char str[] = " yogita beniwal from haryana. ";
    fputs(str,ptr);
    fclose(ptr);

    return 0;
}