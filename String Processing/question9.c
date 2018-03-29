#include<stdio.h>
#include<string.h>

void revString(char arr[], int i, int j){
    if(i >= j)return ;
    char c = arr[i];
    arr[i] = arr[j];
    arr[j] = c;
    revString(arr, i+1, j-1);
}

int main(){
    char str[] = "SOME RANDOM STRING";
    revString(str,0, strlen(str)-1);
    puts(str);
return 0;
}