#include<stdio.h>
#include<string.h>

int main(){
    char a[100],b[100],c[100];
    puts("ENTER STRING 1: ");
    gets(a);
    puts("ENTER STRING 2: ");
    gets(b);
    strcpy(c,a);
    strcpy(a,b);
    strcpy(b,c);
    puts("STRING 1: ");
    puts(a);
    puts("STRING 2: ");
    puts(b);
return 0;
}