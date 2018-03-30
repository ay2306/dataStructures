#include<stdio.h>
#include<stdlib.h>

void rotateRight(int arr[], int n, int k){
    int i = 0;
    int *tmpArr = (int*)malloc(n*sizeof(int));
    for(i = 0; i < n; ++i){
        tmpArr[(i+k)%n] = arr[i];
    }
    for(i = 0; i < n; ++i){
        arr[i] = tmpArr[i];
    }
    free(tmpArr);
}
void rotateLeft(int arr[], int n, int k){
    int i = 0;
    int *tmpArr = (int*)malloc(n*sizeof(int));
    for(i = 0; i < n; ++i){
        tmpArr[(n+i-k)%n] = arr[i];
    }
    for(i = 0; i < n; ++i){
        arr[i] = tmpArr[i];
    }
    free(tmpArr);
}
int main(){
    int n,i,k;
    printf("ENTER NUMBER OF ELEMENTS: ");
    scanf("%d",&n);
    int *arr = (int*)malloc(n*sizeof(int));
    for(i = 0; i < n; ++i){
        printf("ENTER ELEMENT %d: ",(i+1));
        scanf("%d",&arr[i]);
    }
    printf("ENTER ROTATION VALUE: ");
    scanf("%d",&k);
    rotateRight(arr, n, k);
    for(i = 0; i < n; ++i)printf("%d\t",arr[i]);
    printf("\n");
    rotateRight(arr, n, n-k);//to reset array
    rotateLeft(arr, n, k);
    for(i = 0; i < n; ++i)printf("%d\t",arr[i]);
    printf("\n");
}