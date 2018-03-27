#include<stdio.h>

int main(){
    char str[1000];
    char ans[1000];
    int a[26] = {0};
    int i;
    int j = 0;
    printf("ENTER STRING: ");
    gets(str);
    for(i = 0; str[i] != '\0'; ++i){
        if(str[i] >= 'a' && str[i] <= 'z'){
            if(a[str[i] - 97] == 0){
                ans[j] = str[i];
                a[str[i] - 97]++;
                ++j;
            }
        }
        else if(str[i] >= 'A' && str[i] <= 'Z'){
            if(a[str[i] - 65] == 0){
                ans[j] = str[i];
                a[str[i] - 65]++;
                ++j;
            }
        }
    }
    ans[j] = '\0';
    puts(ans);
    return 0;
}