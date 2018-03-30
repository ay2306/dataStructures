#include<stdio.h>

void computeArray(char str[], int arr[]){
    int i = 0;
    for(; str[i] != '\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            arr[str[i]-97]++;
        }
        if(str[i] >= 'A' && str[i] <= 'Z'){
            arr[str[i]-65]++;
        }
    }
}

int compareArray(int arr1[], int arr2[]){
    int i;
    for(i = 0; i < 26; ++i){
        if(arr1[i]!=arr2[i])return 0;
    }
return 1;
}

int main(){
    char str1[1000],str2[1000];
    int arr1[26] = {0};
    int arr2[26] = {0};
    printf("ENTER STRING 1: ");
    gets(str1);
    computeArray(str1, arr1);
    printf("ENTER STRING 2: ");
    gets(str2);
    computeArray(str2, arr2);
    if(compareArray(arr1,arr2)){
        printf("ANAGRAMS\n");
    }else{
        printf("NOT ANAGRAMS\n");
    }
    return 0;
}