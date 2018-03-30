#include<stdio.h>

int main(){
    char str[1000];
    printf("ENTER STRING: ");
    gets(str);
    int arr[26] = {0};
    int i = 0;
    for(; str[i] != '\0'; ++i){
        if(str[i] >= 'a' && str[i] <= 'z'){
            arr[str[i]-97]++;
        }
        if(str[i] >= 'A' && str[i] <= 'Z'){
            arr[str[i]-65]++;
        }
    }
    for(i = 0; str[i]!='\0';++i){
        if(str[i] >= 'a' && str[i] <= 'z'){
            if(arr[str[i]-97] == 1){
                printf("NON REPEATING CHARACTER: %c\n",str[i]);
            }
        }
        if(str[i] >= 'A' && str[i] <= 'Z'){
            if(arr[str[i]-65] == 1){
                printf("NON REPEATING CHARACTER: %c\n",str[i]);
            }
        }
    }
return 0;
}