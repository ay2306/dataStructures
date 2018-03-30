#include<stdio.h>
#include<string.h>
void swap(char *a, char *b){
    char c = *a;
    *a = *b;
    *b = c;
}

void perm(char *str, int l, int r){
    static int c;
    int i;
    if(l == r){
        c++;
        printf("%3d. %s\n",c,str);
        return;
    }
    for(i  = l; i <= r; ++i){
        swap((str+l),(str+i));
        perm(str,l+1,r);
        swap((str+l),(str+i));
    }
}
int main(){
    char str[] = "ABCDEFGHIJ";
    perm(str,0,strlen(str)-1);
return 0;
}