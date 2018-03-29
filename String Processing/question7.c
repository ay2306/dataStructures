#include<stdlib.h>
#include<stdio.h>
#include<string.h>
void computeLPSarray(int lps[], int M, char *str);

void KMP_search(char *txt, char *pat){
    int M = strlen(pat);
    int N = strlen(txt);
    int *lps = (int*)calloc(M,sizeof(int));
    computeLPSarray(lps, M, pat);
    int i,j;
    i = 0;
    j = 0;
    while(i < N){
        if(txt[i] == pat[j]){
            ++i;
            ++j;
        }
        if(j == M){
            printf("Pattern found at index %d\n", i-j );
            j = lps[j-1];
        }
        else if(i < N && txt[i] != pat[j]){
            if(j != 0){
                j = lps[j-1];
            }else{
                ++i;
            }
        }
    }
}

void computeLPSarray(int lps[], int M, char *pat){
    int len = 0;
    lps[0] = 0;
    int i = 0;
    i = 1;
    while(i < M){
        if(pat[i] == pat[len]){
            len++;
            lps[i] = len;
            ++i;
        }
        else{
            if(len != 0){
                len = lps[len-1];
            }else{
                lps[i] = 0;
                ++i;
            }
        }
    }
}


int main(){
    // char *str1, *str2;
    // printf("ENTER STRING 1: ");
    // gets(str1);
    // printf("ENTER STRING 2: ");
    // gets(str2);
    char *str1 = "ayush mahajan";
    char *str2 = "mahajan";
    KMP_search(str1, str2);
    return 0;
}