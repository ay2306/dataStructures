#include<stdio.h>

int main(){
    char str[1000];
    int a[26] = {0};
    //int a[26] = {0} is partial initialisation of array a
    // Concept, when array is partially initialised
    // Then all other elements are initialised to 0
    // Not depending on what values have been assigned to assigned array
    int i;
    int maximum = 0;
    printf("ENTER STRING: ");
    gets(str);
    for(i = 0; str[i] != '\0'; ++i){
        if(str[i] >= 'a' && str[i] <= 'z')//checking if capital or not
        {
            a[str[i]-97]++;
            if(a[maximum] < a[str[i] - 97])maximum = (str[i] - 97);
        }else if(str[i] >= 'A' && str[i] <= 'Z'){
            a[str[i]-65]++;
            if(a[maximum] < a[str[i] - 65])maximum = (str[i] - 65);
        }
    }
    printf("Most repeating element is: %c\n",(maximum + 65));
    return 0;
}