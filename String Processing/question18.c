#include<stdio.h>

int main(){
    char a[1000],b[1000],c[1000];
    printf("ENTER STRING 1: ");
    gets(a);
    printf("ENTER STRING 2: ");
    gets(b);
    printf("ENTER STRING 3: ");
    gets(c);
    int i,j,k;
    j = 0;
    k = 0;
    i = 0;
    for(; a[i] != '\0'; ++i){
        if(a[i] == b[j]){
            j++;
        }
        else if(a[i] == c[k]){
            ++k;
        }
        else{
            break;
        }
    }
    if(a[i] != '\0'){
        printf("NOT INTER-LEAVING\n");
    }
    if(a[i] == '\0'){
        printf("INTER-LEAVING\n");
    }
}