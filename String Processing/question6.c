#include<stdio.h>

int main(){
    char str1[1000];
    char str2[1000];
    char ans[1000];
    int i;
    int j = 0;
    int arr[26] = {0};
    printf("ENTER STRING 1: ");
    gets(str1);
    printf("ENTER STRING 2: ");
    gets(str2);
    for(i = 0; str1[i] != '\0'; ++i){
        if(str1[i] >= 'a' && str1[i] <= 'z'){
            arr[str1[i] - 97]++;
        }
        if(str1[i] >= 'A' && str1[i] <= 'Z'){
            arr[str1[i] - 65]++;
        }
    }
    for(i = 0; str2[i] != '\0'; ++i){
        if(str2[i] >= 'a' && str2[i] <= 'z'){
            if(!arr[str2[i] - 97]){
                ans[j] = str2[i];
                ++j;
            }
        }
        if(str2[i] >= 'A' && str2[i] <= 'Z'){
            if(!arr[str2[i] - 65]){
                ans[j] = str2[i];
                ++j;
            }          
        }
    }
    ans[j] = '\0';
    puts(ans);
return 0;
}