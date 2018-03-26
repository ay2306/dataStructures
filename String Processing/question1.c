#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int pal = 1;
    gets(str);
    int i = 0;
    int j = strlen(str);
    j--;
    while(i<j){
        if(str[i]!=str[j]){
            pal = 0;
            break;
        }
        i++;
        j--;
    }
    if(pal)printf("GIVEN STRING WAS A PALLINDROME\n");
    if(!pal)printf("GIVEN STRING WAS NOT A PALLINDROME\n");
    return 0;
}