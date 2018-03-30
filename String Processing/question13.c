#include<stdio.h>

int main(){
    char str[1000];
    printf("ENTER STRING: ");
    gets(str);
    char last = ' ';
    int c = 1;
    int i;
    for(i = 0; str[i] != '\0'; ++i){
        if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z')){
            if(str[i] == last){
                c++;
            }else if(last != ' '){
                printf("%c%d",last,c);
                c = 1;
                last = str[i];
            }else{
                last = str[i];
                c = 1;  
            }
        }
    }
    printf("%c%d",last,c);
return 0;
}