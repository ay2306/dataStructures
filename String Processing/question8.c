#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void computeLPSarray(int lps[], int M, char *pat){
    int len = 0;
    lps[0] = 0;
    int i = 1;
    while(i < M){
        if(pat[i] == pat[len]){
            len++;
            lps[i] = len;
            ++i;
        }else{
            if(len != 0){
                len = lps[len-1];
            }else{
                lps[i] = 0;
                i++;
            }
        }
    }   
}

int KMP_search(char *txt, char *pat){
    int N = strlen(txt);
    int M = strlen(pat);
    int *lps = (int*)calloc(M,sizeof(int));
    int i = 0;
    int j = 0;
    while(i < N){
        if(pat[j] == txt[i]){
            ++i;++j;
        }
        if(j == M){
            return 1;
        }else if(i < N && txt[i] != pat[j]){
            if(j != 0){
                j = lps[j-1];
            }else{
                ++i;
            }
        }
    }
return 0;
}

int check(char *str1, char *str2){
    char *txt = (char*)calloc(2*strlen(str1)+1, sizeof(char));
    strcpy(txt,str2);
    strcat(txt,str2);
    if(KMP_search(txt,str1)){
        printf("TRUE\n");
    }else{
        printf("FALSE\n");
    }
}

int main(){
    char *str1 = "ABCDEG";
    char *str2 = "DEABCF";
    check(str1,str2);   
    return 0;
}