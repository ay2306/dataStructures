#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void IlsUtil(char *str1, char *str2, char *iStr, int m, int n, int i){
    static int c;
    if(m == 0 && n == 0){
        c++;
        printf("%5d. %s\n",c,iStr);
    }
    if(m != 0){
        iStr[i] = str1[0];
        IlsUtil(str1 + 1, str2, iStr, m-1, n, i+1);
    }
    if(n != 0){
        iStr[i] = str2[0];
        IlsUtil(str1, str2+1, iStr, m, n-1, i+1);
    }
}

void Ils(char *str1, char *str2){
    int m = strlen(str1);
    int n = strlen(str2);
    char *iStr = (char *)malloc((m+n+1)*sizeof(char));
    iStr[m+n] = '\0';
    IlsUtil(str1,str2,iStr,m,n,0);
    free(iStr);
}

int main(){
    char str1[100],str2[100];
    printf("ENTER STRING 1: ");
    gets(str1);
    printf("ENTER STRING 2: ");
    gets(str2);
    Ils(str1,str2);
}