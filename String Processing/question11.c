#include<stdio.h>
#include<string.h>

void revWord(char arr[], int i, int j){
    if(i >= j)return ;
    char c = arr[i];
    arr[i] = arr[j];
    arr[j] = c;
    revWord(arr, i+1, j-1);
}

int main(){
    char str[] = "SOME RANDOM STRING TO CHECK MY CODE";
    // STEP 1: REVERSE WHOLE STRING
    revWord(str, 0, strlen(str)-1);
    int i = 0;
    int j;
    for(j = 0; str[j]!='\0'; ++j){
        if(str[j+1] == ' ' || str[j+1] == '\0'){
            revWord(str,i,j);
            i = j+2;
        }
    }
    puts(str);
return 0;
}