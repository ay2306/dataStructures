#include<stdio.h>

int main(){
    int arr[100];
    int n,i,min,max;
    printf("ENTER NUMBER OF ELEMENTS: ");
    scanf("%d",&n);
    min = 0; max = 0;
    for(i = 0; i < n; ++i){
        printf("ENTER ELEMENT NUMBER %d: ",(i+1));
        scanf("%d",&arr[i]);
        if(arr[i] < arr[min]){
            min = i;
        }
        if(arr[i] > arr[max]){
            max = i;
        }
    }
    printf("\nMAXIMUM ELEMENT OF ARRAY IS %d AT INDEX %d\n",arr[max],max);
    printf("MINIMUM ELEMENT OF ARRAY IS %d AT INDEX %d\n",arr[min],min);
return 0;
}