#include<stdio.h>
#include<string.h>

int main(){
    char str[10000];
    printf("ENTER STRING: ");
    gets(str);
    int n;
    printf("ENTER N: ");
    scanf("%d",&n);
    n = strlen(str)/n;
    int i,k;
    k = 0;
    for(i = 0; str[i]!='\0'; ++i){
        printf("%c",str[i]);
        ++k;
        if(k >= n){
            printf("\n");
            k = 0;
        }
    }
return 0;

}