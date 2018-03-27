#include<stdio.h>

int main(){
    char str[1000];
    int a[26] = {0};
    printf("ENTER STRING: ");
    gets(str);
    int i;
    for(i = 0; str[i] != '\0'; ++i){
        if(str[i]>='a' && str[i] <= 'z'){
            a[str[i]-97]++;
        }
        if(str[i]>='A' && str[i] <= 'Z'){
            a[str[i]-65]++;
        }
    }
    for(i = 0; i < 26; ++i){
        if(a[i] > 1){
            printf("%c, count = %d\n",(char)(i+65),a[i]);
        }
    }
    return 0;
}