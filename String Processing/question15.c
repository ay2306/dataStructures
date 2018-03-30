#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char a[1000],b[1000],c[1000];
    printf("ENTER STRING 1: ");
    gets(a);
    printf("ENTER STRING 2: ");
    gets(b);
    int arr[26] = {0};
    int i,j;
    j = 0;
    for(i = 0; b[i]!='\0'; ++i){
        if(b[i]>='a' && b[i]<='z'){
            arr[b[i]-97]++;
        }
        if(b[i]>='A' && b[i]<='Z'){
            arr[b[i]-65]++;
        }
    }
    for(i = 0; a[i]!='\0'; ++i){
        if(a[i]>='a' && a[i]<='z'){
            if(!arr[a[i]-97]){
                c[j] = a[i];
                ++j;
            }
        }
        if(a[i]>='A' && a[i]<='Z'){
            if(!arr[a[i]-65]){
                c[j] = a[i];
                ++j;
            }
        }
    }
    c[j] = '\0';
    printf("OUTPUT STRING: %s\n",c);
}